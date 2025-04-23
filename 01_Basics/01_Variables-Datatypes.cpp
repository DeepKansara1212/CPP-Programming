#include<iostream>
using namespace std;

int main() {

    // int num1 = 10;
    // int num2 = 20;
    // int num3 = 30;
    // int num4 = 40;

    int num1 = 10, num2 = 20, num3 = 30, num4 = 40;

    const int age = 10;
    // age is declared as a constant, so it cannot be modified later in the code.
    // age = 20;
    // char str[] = {'c', 'o', 'd', 'e', '\0'};
    string _str = "code";
    float number_1 = 10.5;
    double number2 = 10.5;
    char character = 'c';
    bool isTrue = true;


    char char1 = 99;

    // "int" is a keyword in C++ and cannot be used as a variable name.
    // float int = 10.5f; 

    cout << "The value of age is " << age << endl;
    cout << _str << endl;
    cout << number_1 << endl;
    cout << number2 << endl;
    cout << character << endl;
    cout << isTrue << endl; 
    cout << char1 << endl; // prints 'c' as 99 is the ASCII value of 'c'

    return 0;
}

// 35e3 -> 35 * 10^3 = 35000
// 35e-3 -> 35 * 10^-3 = 0.035