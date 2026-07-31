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

int search_node(node* head , int target){
    node* temp = head;
    int count = 1;

    while(temp != nullptr){
        if(temp->data == target) return count;
        temp = temp->next;
        count++;
    }

    return 0;
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
    int target;
    cout << "Enter target: ";
    cin >> target;

    cout << "we found number at " << search_node(head , target) << " position";
    return 0;
}
