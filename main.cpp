#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdio>
#include "HashMap.cpp"
#include "util.h"

using namespace std;

int main() {
    HashMap hashTable;
    int key;
    int value;
    int choice = 0;

    while(1){
        util::printMenu();
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "\nPlease enter the value: ";
                cin >> value;
                cout << "Please enter a key: ";
                cin >> key;
                hashTable.insert(key, value);
                break;
            case 2:
                cout << "\nEnter a key to search for: ";
                cin >> key;
                if (hashTable.search(key) == -1) {
                    cout << "No element found at key: " << key << endl;
                    continue;
                }
                else {
                    cout << "Element at " << key << ": " << hashTable.search(key) << endl; 
                }
                break;
            case 3:
                cout << "\nEnter the key of the element to be deleted: ";
                cin >> key;
                hashTable.remove(key);
                break;
            case 4:
                exit(1);
                break;
            default:
                cout << "\nInvalid Entry. Try Again." << endl;
        }
    }
    return 0;
}