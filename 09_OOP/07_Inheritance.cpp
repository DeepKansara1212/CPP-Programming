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

    // Creating an object of the Car class
    Car car1;
    car1.name = "Toyota";
    car1.price = 20000;
    car1.car_model = "Corolla";
    car1.year = 2020;

    // Creating an object of the Bike class
    Bike bike1;
    bike1.name = "Yamaha";
    bike1.price = 15000;
    bike1.bike_model = "YZF-R3";

    return 0;
}