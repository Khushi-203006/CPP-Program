#include <iostream>   // for input/output (cin, cout)
#include <vector>     // for using vector (dynamic array)
using namespace std;  // so we don’t need to write std:: every time

// Define structure for a node of linked list
struct node {
    int data;      // stores value of node
    node* next;    // pointer to next node

    // Constructor to initialize node
    node(int data1, node* next1) {
        data = data1;   // assign value
        next = next1;   // assign next pointer
    }
};

// Function to delete head node of linked list
node* delete_head(node* head) {

    // If list is empty, return NULL
    if (head == nullptr) {
        return nullptr;
    }

    node* temp = head;     // store current head in temp
    head = head->next;     // move head to next node

    delete temp;           // delete old head node (free memory)

    return head;           // return new head
}

// Function to print linked list
void print(node* head) {

    // Traverse till end of list
    while (head != nullptr) {
        cout << head->data << " ";   // print current node data
        head = head->next;           // move to next node
    }
}

int main() {

    int n;
    cout << "Enter number of values:- ";
    cin >> n;   // input number of elements

    vector<int> arr(n);   // create vector of size n

    cout << "Enter values:- ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];   // input values into vector
    }

    // Create first node (head)
    node* head = new node(arr[0], nullptr);

    node* temp = head;   // temp pointer to build list

    // Create rest of linked list
    for (int i = 1; i < n; i++) {
        temp->next = new node(arr[i], nullptr);  // create new node
        temp = temp->next;   // move temp to next node
    }

    // Delete head node
    head = delete_head(head);

    cout << "After deleting head: ";

    // Print updated list
    print(head);

    return 0;   // end of program
}

