#include<iostream>
using namespace std;

int main() {
    int num1 = 10, num2 = 20;

    cout << (num1 > 5) && (num2 < 30); // true
    cout << (num1 > 15) || (num2 < 30); // true
    cout << !((num1 > 15) || (num2 < 30)); // false



    return 0;
}