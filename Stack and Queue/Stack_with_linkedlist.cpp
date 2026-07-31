#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class Stack {
private:
    Node* topNode;

public:
    Stack() : topNode(nullptr) {}

    ~Stack() {
        while (topNode != nullptr) {
            Node* temp = topNode;
            topNode = topNode->next;
            delete temp;
        }
    }

    bool isEmpty() const {
        return topNode == nullptr;
    }

    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = topNode;
        topNode = newNode;
        cout << value << " pushed to stack" << endl;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return -1;
        }

        Node* temp = topNode;
        int poppedValue = temp->data;
        topNode = topNode->next;
        delete temp;

        cout << poppedValue << " popped from stack" << endl;
        return poppedValue;
    }

    int peek() const {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }

        cout << "Top element is: " << topNode->data << endl;
        return topNode->data;
    }

    void showStack() const {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Stack elements are: ";
        Node* current = topNode;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    Stack st;

    st.push(5);
    st.push(10);
    st.push(15);
    st.pop();
    st.pop();
    st.push(20);
    st.push(25);
    st.push(30);
    st.peek();
    st.pop();
    st.showStack();

    return 0;
}
