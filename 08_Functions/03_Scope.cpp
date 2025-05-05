#include<iostream>
using namespace std;


int main() {
    // Global variable -> Access from anywhere in the program
    int a = 10;

    cout << "Value of a: " << a << endl;
    
    {
        // local variable -> Access from within the block only
        int b = 20;
        cout << "Value of b: " << b << endl;
        cout << "Value of a: " << a << endl;
    }
    
    // cout << "Value of b: " << b << endl;
    return 0;
}