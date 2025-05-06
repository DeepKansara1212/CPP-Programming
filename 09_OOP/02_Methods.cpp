#include<iostream>
using namespace std;

class Fruits {
    public:
        // Attributes of the class
        string name;
        string color;
        int price;

        // Method of the class
            // Inside the class, we can define methods (functions) that operate on the attributes of the class.
        int addition(int a, int b) {
            cout << a + b << endl;
        }

            // Outside the class, we can define methods (functions) that operate on the attributes of the class.
        void message1();
};


void Fruits::message1() {
    cout << "I am a method which defines outside the class." << endl;
}


int main() {
    Fruits apple;
    apple.name = "Apple";
    apple.color = "Red";
    apple.price = 100;
    apple.addition(10, 20);

    Fruits mango;
    mango.name = "Mango";
    mango.color = "Yellow";
    mango.price = 200;
    mango.message1();

    cout << "Name: " << apple.name << endl;
    cout << "Color: " << apple.color << endl;
    cout << "Price: " << apple.price << endl;

    return 0;
}