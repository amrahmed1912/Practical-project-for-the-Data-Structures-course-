#ifndef STACK_H_
#define STACK_H_

#include <iostream>
using namespace std;

// =========== Stack Implementation ===========
class Stack {
private:
    int arr[100];
    int top;

public:
    void push(int data);
    void pop();
    void display();

    Stack() : top(-1) {}
};



void Stack::push(int data) {
    if (top == 99) {
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