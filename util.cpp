#include <iostream>
#include <fstream>
#include <string>
#include "util.h"

using namespace std;

// Printing the menu
void util::printMenu() {
    cout << "\nHash Table" << endl;
    cout << "\n----------------------" << endl;
    cout << "1. Insert element" << endl;
    cout << "2. Search element" << endl;
    cout << "3. Delete element" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: " << endl;
    cout << "\n----------------------" << endl;
}       
