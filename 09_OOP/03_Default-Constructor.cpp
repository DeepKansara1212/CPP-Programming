#include<iostream>
using namespace std;

class Fruits {
    public:
        string name;
        string color;
        int price;

        // Default Constructor: Named same as the class name
        Fruits() {
            cout << "Hello World!" << endl;
        }
};

int main() {
    // Constructor: A special member function that is automatically called when an object of a class is created.
    // It is used to initialize the object's data members.

    Fruits apple;

    Fruits mango;

    Fruits kiwi;

    return 0;
}