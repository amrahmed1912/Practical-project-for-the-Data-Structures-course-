#ifndef ARRAY_H_
#define ARRAY_H_
#define SIZE 100

#include <iostream>
using namespace std;

// =========== Array Implementation ===========
class Array{
    private:
        int arr[SIZE];
        int size = 0;
    public:
        void insert(int data);
        void deletItems(int data);
        void Display();
};


void Array::insert(int data) {
    if (size == SIZE) {  
        cout << "array is full \n";
        return;
    }

    arr[size] = data;  
    size++;            
}

void Array::deletItems(int data) {
    if (size == 0) {
        cout <<"array is empty\n";
        return;
    }

    // linear search
    for (int i = 0; i < size; i++) {
        if (arr[i] == data) {
            for (int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--;  
            i--;    
        }
    }
}

void Array::Display() {
    if (size == 0) { 
        cout << "array is empty\n";
        return;
    }

    cout<<"Array element: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
}

#endif