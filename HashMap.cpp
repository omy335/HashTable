#include <iostream>
#include "HashEntry.cpp"

using namespace std;
const int TABLE_SIZE = 128;

class HashMap {
    private:
        HashEntry **table;
    public:
        HashMap() {
            table = new HashEntry * [TABLE_SIZE];
            for (int i = 0; i < TABLE_SIZE; i++) {
                table[i] = 0;
            }
        }

        // Hashing Function
        int Hash(int key) {
            return key % TABLE_SIZE;
        }

        // Inserting an element
        void insert(int key, int value) {
            int hash = Hash(key);
            while (table[hash] != 0 && table[hash]->key != key) {
                hash = Hash(hash + 1);
            }
            if (table[hash] != 0) {
                delete table[hash];
            }
            table[hash] = new HashEntry(key, value);
        }

        // Searching for an element by key
        int search(int key) {
            int hash = Hash(key);
            while (table[hash] != 0 && table[hash]->key != key) {
                hash = Hash(hash + 1);
            }
            if (table[hash] == 0) {
                return -1;
            }
            else {
                return table[hash]->value;
            }
        }

        // Removing an element from the Hash Table
        void remove(int key) {
            int hash = Hash(key);
            if (search(key) == -1) {
                cout << "No element found at key: " << key << endl;
                return;
            }
            else {
                delete table[hash];
            }
            cout << "Element deleted." << endl;
        }

        string toString() {
            string output = "";
            for (int i = 0; i < TABLE_SIZE; i++) {
                if (table[i] != 0) {
                    output += table[i]->toString();
                }
            }
            return output;
        }

        ~HashMap() {
            for (int i = 0; i < TABLE_SIZE; i++) {
                if (table[i] != 0) {
                    delete table[i];
                }
                delete[] table;
            }
        }
};