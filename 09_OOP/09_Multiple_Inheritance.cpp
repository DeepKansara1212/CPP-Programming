#include<iostream>
#include<string>
using namespace std;


// Base Class 1
class Parent_1 {
    public:
        string name;
        float price;
};

// Base class 2
class Parent_2 {
    public:
        string color;
        int speed;
};


// Derived Class
class Car : public Parent_1, public Parent_2 {
    public:
        string car_model;
        int year;
};
