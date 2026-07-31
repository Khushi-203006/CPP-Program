// delete the node with having current mode on the bassi of data value
// ll = 4->6->2->9->1
// delete node with data as 9
// after deletion ll = 4->6->2->1

#include <bits/stdc++.h>
using namespace std;

//
struct node{
    int data;
    node* next;

    node(int data1, node* next1){
        data = data1;
        next = next1;
    }
};

// function to delete node with given data value
node* delete_data_node(node* head , int x){
    if(head == nullptr) return nullptr;

    if(head->data == x){
        node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    node* temp = head;
    while(temp->next != nullptr && temp ->next -> data != x){
        temp = temp->next;
    }
    if(temp->next == nullptr) return head;
    node* temp1 = temp->next;
    temp->next = temp->next->next;
    delete temp1;
    return head;
}

// iteration of linkedlist
void linked_list(node* head){
    while(head->next != nullptr){
        cout << head->data << " " << "->" << " ";
        head = head->next;
    }
    cout << head->data << endl;
}


//main function
int main(){
    int n;
    cout << "Enter number of nodes: " ;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout << "Enter element: ";
        cin >> arr[i];
    }

    node* head = new node(arr[0],nullptr);

    node* temp = head;
    for(int i=1;i<n;i++){
        temp->next = new node(arr[i],nullptr);
        temp = temp->next;
    }

    cout << "linkedlist before deletion:- ";
    linked_list(head);

    cout << "Enter data you want to delete: ";
    int delete_data;
    cin>> delete_data;

    cout << "Linkedist after deletion:- ";
    head = delete_data_node(head , delete_data);
    linked_list(head);
}

