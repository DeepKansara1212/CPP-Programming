#include<iostream>
using namespace std;

class Fruits {

    // Public access specifier allows the members of the class to be accessible from outside the class.
    public:
        // Attributes of the class
        string name;
        string color;
        int price;
};


int main() {

    // First object of the class
    Fruits apple;
    apple.name = "Apple";
    apple.color = "Red";
    apple.price = 100;

    // Second object of the class
    Fruits mango;
    mango.name = "Mango";
    mango.color = "Yellow";
    mango.price = 200;

    cout << "Name: " << apple.name << endl;
    cout << "Color: " << apple.color << endl;
    cout << "Price: " << apple.price << endl;

    return 0;
}