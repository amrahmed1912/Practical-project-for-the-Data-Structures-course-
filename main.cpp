#include "Array.h"
#include "Queue.h"
#include "Stack.h"
#include "LinkedList.h"

int main() {
    Array a;
    LinkedList l;
    Stack s;
    Queue q;

    int choice;

    while (true) {
        cout << "=====================================\n";
        cout << "   Data Structure Console Manager    \n";
        cout << "=====================================\n";

        cout << "\n===== MAIN MENU =====\n";
        cout << "1. Array\n";
        cout << "2. Linked List\n";
        cout << "3. Stack\n";
        cout << "4. Queue\n";
        cout << "5. Exit\n";
        cout << "Choose Data Structure: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting Program...\n";
            break;
        }

        // --- Array Menu ---
        else if(choice == 1){
            int op, val;
            while(true){
                cout << "\n--- Array Menu ---\n";
                cout << "1. Insert Item\n2. Delete Item\n3. Display\n4. Back\n";
                cout << "Choose Operation: ";
                cin >> op;

                if (op == 4) break;

                switch (op){
                case 1:
                    cout << "Enter value: ";
                    cin >> val;
                    a.insert(val);
                    break;
                case 2:
                    cout << "Enter value: ";
                    cin >> val;
                    a.deletItems(val);   
                    break;
                case 3:
                    a.Display();
                    break;
                default:
                    cout << "Invalid Option!\n";
                }
            }
        }

        // --- Linked List Menu ---
        else if(choice == 2){
            int op, val;
            while(true){
                cout << "\n--- Linked List Menu ---\n";
                cout << "1. Insert node\n2. Delete node\n3. Display\n4. Back\n";
                cout << "Choose Operation: ";
                cin >> op;

                if (op == 4) break;

                switch (op){
                case 1:
                    cout << "Enter value: ";
                    cin >> val;
                    l.insertNode(val);
                    break;
                case 2:
                    cout << "Enter value: ";
                    cin >> val;
                    l.deleteNode(val);
                    break;
                case 3:
                    l.Display();
                    break;
                default:
                    cout << "Invalid Option!\n";
                }
            }
        }

        // --- Stack Menu ---
        else if (choice == 3) {
            int op, val;
            while (true) {
                cout << "\n--- Stack Menu ---\n";
                cout << "1. Push\n2. Pop\n3. Display\n4. Back\n";
                cout << "Choose Operation: ";
                cin >> op;

                if (op == 4) break;

                switch (op) {
                case 1:
                    cout << "Enter value: ";
                    cin >> val;
                    s.push(val);
                    break;
                case 2:
                    s.pop();
                    break;
                case 3:
                    s.display();
                    break;
                default:
                    cout << "Invalid Option!\n";
                }
            }
        }

        // --- Queue Menu ---
        else if (choice == 4) {
            int op, val;
            while (true) {
                cout << "\n--- Queue Menu ---\n";
                cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Back\n";
                cout << "Choose Operation: ";
                cin >> op;

                if (op == 4) break;

                switch (op) {
                case 1:
                    cout << "Enter value: ";
                    cin >> val;
                    q.enqueue(val);
                    break;
                case 2:
                    q.dequeue();
                    break;
                case 3:
                    q.display();
                    break;
                default:
                    cout << "Invalid Option!\n";
                }
            }
        }

        else {
            cout << "Invalid Choice!\n";
        }
    }

    return 0;
}