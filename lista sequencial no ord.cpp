#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

void menu();

const int MAX_list = 100;

int arr[MAX_list];
int list = 0;
int i;
void search(int value) {
    for (i = 0; i < list; i++) {
        if (arr[i] == value) {
            cout << "Value found at index "<< i << endl;
            return;
        }
    }
    cout << "Value not found" << endl;
}

void insert(int value) {
    for (i = 0; i < list; i++) {
        if (arr[i] == value) {
            cout << "diplicate value not insert " << endl;
            return;
        }
    }
    
    if (list == MAX_list) {
        cout << "Array is full" << endl;
        return;
    }
    arr[list] = value;
    list++;
    i++;
    cout << "Value inserted at index " << list - 1 << endl;
}

void remove(int value) {
    for ( i = 0; i < list; i++) {
        if (arr[i] == value) {
            for (int j = i; j < list - 1; j++) {
                arr[j] = arr[j + 1];
            }
            list--;
            i--;
            cout << "Value removed from index "<< i << endl;
            return;
        }
    }
    cout << "Value not found" << endl;
}

void display() {
    if (list == 0)
       cout << "empty list";
    if (list != 0)
       cout << "List = ";
    for (int i = 0; i < list; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int total(){
   return list;
}

void clear(){
    system("cls");
    menu();
}

int main() {
    
    menu();
    
    int choice, value;
    do {
        
        cout << "Select option: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter the value you want to search for: ";
                cin >> value;
                search(value);
                break;
            case 2:
                cout << "Enter the value you want to insert: ";
                cin >> value;
                insert(value);
                break;
            case 3:
                cout << "Enter the value you want to remove: ";
                cin >> value;
                remove(value);
                break;
            case 4:
                display();
                break;
            case 5:
            total();
            cout << "Total = " << list << endl;
                break;
            case 6:
                clear();
                break;
            case 7:
                cout << "Exit" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    } while (choice != 7);
    return 0;
}
    void menu()
    {
        cout << "Menu:" << endl;
        cout << "1. Search" << endl;
        cout << "2. Insert" << endl;
        cout << "3. Remove" << endl;
        cout << "4. Display" << endl;
        cout << "5. Total" << endl;
        cout << "6. Clear" << endl;
        cout << "7. Exit" << endl;
    }