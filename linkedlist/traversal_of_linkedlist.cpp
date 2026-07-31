# include <bits/stdc++.h>
# include <vector>
using namespace std;

struct node{
    int data;
    node* next;
    node(int data1, node* next1){
        data = data1;
        next = next1;
    }
};

int no_of_node(node* head){
    if (head == nullptr) return 0;

    node* temp = head;

    int count = 0;
    while(temp != nullptr){
        count++;
        temp = temp->next;
    }
    return count;
}

int main(){
    // linked list - I want to predefine the linked list with some values and then traverse it
    vector<int> arr = {1,3,4,2,5};
    node* head = new node(arr[0] , nullptr);

    node* temp = head;

    for(int i=1;i<arr.size();i++){
        temp->next = new node(arr[i], nullptr);
        temp = temp->next;
    }

    cout << "Number of nodes in linkedlist is : " << no_of_node(head);
    return 0;
}