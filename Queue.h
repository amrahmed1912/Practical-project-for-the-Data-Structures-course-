#ifndef QUEUE_H_
#define QUEUE_H_

#include <iostream>
using namespace std;

#define SIZE 100

// =========== Queue Implementation ===========
class Queue {
private:
    int arr[SIZE];
    int front, rear;

public:
    void enqueue(int data);
    void dequeue();
    void display();
    
    Queue() : front(-1), rear(-1) {}
};

void Queue::enqueue(int data) {

    if(rear != SIZE-1){
        if(front == -1 && rear == -1){
            front++;
            arr[++rear] = data;
        }
        else{
            arr[++rear] = data;
        }
    }
    else{
        cout<<"Queue is Full!\n";
    }

    cout << "Enqueued Successfully...\n";
}

void Queue::dequeue() {
    if (front == -1 && rear == -1) {
        cout << "Queue is Empty!\n";
        return;
    }
    
    // last element
    if (front == rear) {  
        front = rear = -1;
    } 
    else{
        cout << "Dequeued: " << arr[front++] << "\n";
    }

}

void Queue::display() {
    if (front == -1 && rear == -1) {
        cout << "Queue is Empty!\n";
        return;
    }
    cout << "Queue Elements: ";
    for (int i = front; i <= rear; i++)
        cout << arr[i] << " ";
    cout << endl;
}

#endif