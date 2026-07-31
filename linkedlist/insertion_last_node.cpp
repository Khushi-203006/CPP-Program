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

node* insertion_at_last(node* head){
    int data_add;
    cout << "\nEnter data you want to add: ";
    cin >> data_add;

    node* new_node = new node(data_add,nullptr);
    if(head == nullptr){
        return new_node;
    }

    node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }

    temp->next = new_node;
    return head;
}

void print(node* head){
    node* temp = head;
    while(temp!=nullptr)
    cout << temp->data << " " , temp = temp->next;
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

    cout << "Linkedlist before insertion : ";
    print(head);

    head = insertion_at_last(head);

    cout << "Linkedlist after insertion : ";
    print(head);

    return 0;
}