#ifndef QUEUE_H_
#define QUEUE_H_

#include <iostream>
using namespace std;

// =========== Queue Implementation ===========
class Queue {
private:
    int arr[100];
    int front, rear;

public:
    void enqueue(int data);
    void dequeue();
    void display();
    
    Queue() : front(0), rear(0) {}
};

void Queue::enqueue(int data) {
    if (rear == 100) {
        cout << "Queue is Full!\n";
        return;
    }
    arr[rear++] = data;
    cout << "Enqueued Successfully.\n";
}

void Queue::dequeue() {
    if (front == rear) {
        cout << "Queue is Empty!\n";
        return;
    }
    cout << "Dequeued: " << arr[front++] << "\n";
}

void Queue::display() {
    if (front == rear) {
        cout << "Queue is Empty!\n";
        return;
    }
    cout << "Queue Elements: ";
    for (int i = front; i < rear; i++)
        cout << arr[i] << " ";
    cout << endl;
}

#endif