#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include "Node.h"

#include <iostream>
using namespace std;

// =========== Linked List Implementation ===========
class LinkedList{
    private:
        Node* head;
    public:
        void insertNode(int data);
        void deleteNode(int data);
        void Display();
        
        LinkedList(): head(NULL) {}
};



void LinkedList::insertNode(int data){
    Node* newnode = new Node(data);

    if(head == NULL){
        head = newnode;
        newnode->Next = NULL;
    }
    else{
        Node* temp = head;
        while(temp->Next != NULL){
            temp = temp->Next;
        }
        temp->Next = newnode;
        newnode->Next = NULL; 
    }
}

void  LinkedList::deleteNode(int data) {
    if (head == nullptr){ 
        cout << "Linked list is empty!\n";
        return;
    }

    // item at the begining
    if (head->data == data) {
        Node* toDelete = head;
        head = head->Next;
        delete toDelete;
        return;
    }

    Node* temp = head;
    while(temp->Next != nullptr && temp->Next->data != data){
        temp = temp->Next;
    }

    if (temp->Next != nullptr) {
        Node* toDelete = temp->Next;
        temp->Next = temp->Next->Next; 
        delete toDelete;
    }

    else {
        cout <<"Value not found\n";
    }

}

void LinkedList::Display(){
    Node* current = head;
    if(head == NULL){
        cout<<"Linked list is empty!\n";
        return;
    }    
    
    cout<<"Linked List Element: ";
    while(current != NULL){
        cout<<current->data <<" ";
        current = current->Next;
    }
    cout<<endl;
}


#endif