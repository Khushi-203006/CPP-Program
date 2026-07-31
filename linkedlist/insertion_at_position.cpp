# include <bits/stdc++.h>
# include <vector>
using namespace std;

struct node{
    int data;
    node* next;
    node(int data1 , node* next1){
        data = data1;
        next = next1;
    }
};

node* insert_position_node(node* head){
    int data , pos;
    cout << "\nEnter data to insert: ";
    cin >> data;
    cout << "Enter position to insert: ";
    cin >> pos;
    node* new_node = new node(data , nullptr);
    if(pos == 1){
        new_node->next = head;
        return new_node;
    }

    node* temp = head;
    for(int i=0;i<pos-1;i++){
        if(temp == nullptr){
            cout << "Position out of bounds" << endl;
            return head;
        }
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    return head;
}

void print(node* head){
    while (head != nullptr){
        cout << head -> data << " ";
        head = head -> next;
    }
}

int main(){
    int n;
    cout << "Enter number of nodes:- ";
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){   
        cout << "Enter data for node " << i+1 << ": ";
        cin >> arr[i];
    }
    node* head = new node(arr[0] , nullptr);
    node* temp = head;
    for(int i=1;i<n;i++){
        temp->next = new node(arr[i],nullptr);
        temp = temp->next;
    }
    cout << "Linked list before insertion at position: ";
    print(head);

    head = insert_position_node(head);

    cout << "linked list after insertion at position: ";
    print(head);
    return 0;
}