#include <string>
using namespace std;

class HashEntry {
    public:
        int key;
        int value;

        HashEntry(int keyIn, int valueIn) {
            key = keyIn;
            value = valueIn;
        }

        string toString() {
            string output = to_string(key) + " " + to_string(value) + " | ";
            return output;
        }
};