#include<iostream>
#include<string>
using namespace std;


// Base Class
class Vehicle {
    protected:
        string name;
        float price;
};

// Derived Class
class Car : public Vehicle {
    public:
        string car_model;
        int year;
};

// Derived Class
class Bike : public Vehicle {
    public:
        string bike_model;
};

int main() {

    return 0;
}