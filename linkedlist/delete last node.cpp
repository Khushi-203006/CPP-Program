#include <iostream>
#include <vector>
using namespace std;

//define structure for a node
struct node{
    int data;
    node* next;

    node(int data1,node* next1){
        data = data1;
        next = next1;
    }
};

//function to delete last node
node* delete_last(node* head){

    if(head == nullptr) return nullptr;

    if(head->next == nullptr){
        delete head;
        return nullptr;
    }

    node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}


void whole_node(node* head){
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){
    int n;
    cout << "Enter number:" ;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout << "Enter number:- ";
        cin >> arr[i];
    }
    node* head = new node(arr[0] , nullptr);
    node* temp = head;
    
    for(int i=1;i<n;i++){
        temp->next = new node(arr[i],nullptr);
        temp = temp->next;
    }
    
    cout << "Linked list before deletion:- ";
    whole_node(head);

    cout << "\nLinked list after deletion:- ";
    head = delete_last(head);
    whole_node(head);
}
