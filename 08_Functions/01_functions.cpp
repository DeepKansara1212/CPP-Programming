#include<iostream>
using namespace std;

void greetings() {
    cout << "Hello World!" << endl;
}   

int addition(int a, int b) {
    return a + b;
}

int main() {
    greetings();


    cout << addition(10, 20) << endl;
    cout << addition(10, 20) << endl;
    cout << addition(10, 20) << endl;
    cout << addition(10, 20) << endl;
    cout << addition(10, 20) << endl;

    // int num1 = 101, num2 = 14;
    // int sum = num1 + num2;
    // cout << sum << endl;

    return 0;
}