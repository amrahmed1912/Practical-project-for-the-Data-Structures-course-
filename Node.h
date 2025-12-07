#ifndef NODE_H_
#define NODE_H_

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* Next;
    Node(int val): data(val), Next(NULL) {}
};

#endif