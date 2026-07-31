#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;
    int capacity;
    int front;
    int rear;
    int size;

public:
    Queue(int cap) : capacity(cap), front(0), rear(-1), size(0) {
        arr = new int[capacity];
    }

    ~Queue() {
        delete[] arr;
    }

    bool isFull() const {
        return size == capacity;
    }

    bool isEmpty() const {
        return size == 0;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow" << endl;
            return;
        }

        rear = (rear + 1) % capacity;
        arr[rear] = value;
        size++;
        cout << value << " enqueued to queue" << endl;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
            return -1;
        }

        int value = arr[front];
        front = (front + 1) % capacity;
        size--;
        cout << value << " dequeued from queue" << endl;
        return value;
    }

    int peek() const {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        cout << "Front element is: " << arr[front] << endl;
        return arr[front];
    }

    void display() const {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue elements are: ";
        for (int i = 0; i < size; i++) {
            cout << arr[(front + i) % capacity] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.peek();
    q.dequeue();
    q.peek();
    q.display();

    return 0;
}