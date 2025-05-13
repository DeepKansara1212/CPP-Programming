#include<iostream>
#include<string>
using namespace std;


// Base Class
class Vehicle {
    public:
        string name;
        float price;
};

// Derived Class
class Car : public Vehicle {
    
};

class Car_child : public Car {

};

// Derived Class
class Bike : public Vehicle {
    
};

int main() {

    return 0;
}