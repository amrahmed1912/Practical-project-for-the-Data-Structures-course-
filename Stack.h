#ifndef STACK_H_
#define STACK_H_

#include <iostream>
using namespace std;

#define SIZE 100

// =========== Stack Implementation ===========
class Stack {
private:
    int arr[SIZE];
    int top;

public:
    void push(int data);
    void pop();
    void display();

    Stack() : top(-1) {}
};



void Stack::push(int data) {
    if (top == SIZE-1) {
        cout << "Stack is Full!\n";
        return;
    }
    arr[++top] = data;
}

void Stack::pop() {
    if (top == -1) {
        cout << "Stack is Empty!\n";
        return;
    }
    cout << "Popped: " << arr[top--] << "\n";
}

void Stack::display() {
    if (top == -1) {
        cout << "Stack is Empty!\n";
        return;
    }
    cout << "Stack Elements: ";
    for (int i = top; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;
}

#endif