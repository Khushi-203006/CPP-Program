#include <bits/stdc++.h>
#include <vector>
using namespace std;

struct node{
    int data;
    node* next;

    node(int data1, node* next1){
        data = data1;
        next = next1;
    }
};

node* insert_head_node(node* head){
    int data;
    cout << "Enter data to insert at head: ";
    cin >> data;
    node* new_node = new node(data, head);
    return new_node;
}

void print(node* head){
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){
    int n;
    cout << "Enter number of nodes:";
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout << "Enter data for node " << i+1 << ": ";
        cin >> arr[i];
    }

    node* head = new node(arr[0], nullptr);

    node* temp = head;

    for(int i=1;i<n;i++){
        temp->next = new node(arr[i], nullptr);
        temp = temp->next;
    }

    cout << "Linked list before insertion at head: ";
    print(head);

    head = insert_head_node(head);

    cout << "Linked list after insertion at head: ";
    print(head);
    return 0;
}