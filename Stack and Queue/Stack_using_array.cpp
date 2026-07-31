# include <bits/stdc++.h>
using namespace std;

int push(int stack[] , int &top , int value){
    if(top == 9){
        cout << "Stack Overflow" << endl;
        return -1;
    }
    else{
        top++;
        stack[top] = value;
        cout << value << " pushed to stack" << endl;
        return 0;
    }
}

int pop(int stack[] , int &top){
    if(top == -1){
        cout << "Stack Underflow" << endl;
        return -1;
    }
    else{
        int poppedValue = stack[top];
        top--;
        cout << poppedValue << " popped from stack" << endl;
        return poppedValue;
    }
}

int topElement(int stack[] , int &top){
    if(top == -1){
        cout << "Stack is empty" << endl;
        return -1;
    }
    else{
        cout << "Top element is: " << stack[top] << endl;
        return stack[top];
    }
}

void showStack(int stack[] , int &top){
    if(top == -1){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack elements are: ";
        for(int i = top; i >= 0; i--){
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n = 10;
    int stack[n];
    int top = -1;

    push(stack, top, 5);
    push(stack, top, 10);
    push(stack, top, 15);
    pop(stack, top);
    pop(stack, top);
    push(stack, top, 20);
    push(stack, top, 25);
    push(stack, top, 30);
    topElement(stack, top);
    pop(stack, top);
    showStack(stack, top);

    return 0;
}