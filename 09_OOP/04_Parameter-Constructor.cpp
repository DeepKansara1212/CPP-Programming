#include<iostream>
using namespace std;

class Fruits {
    public:
        string name;
        string color;
        int price;

        // Parameter Constructor:
        Fruits(string n, string c, int p) {
            cout << "Parameter Constructor called!" << endl;

            name = n;
            color = c;
            price = p;
        }
};

int main() {
    Fruits apple("Apple", "Red", 100);

    Fruits mango("Mango", "Yellow", 200);

    Fruits kiwi("Kiwi", "Green", 500);


    cout << "Name:" << apple.name << endl;
    cout << "Color:" << apple.color << endl;
    cout << "Price:" << apple.price << endl;

    return 0;
}