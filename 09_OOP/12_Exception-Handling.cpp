#include<iostream>
#include<string>
using namespace std;


int main() {
    try
    {
        int age = 15;
        if (age >= 18) {
            cout << "You are eligible to vote" << endl;
        }
        else {
            // cout << "You are not eligible to vote" << endl;
            throw age;      // Throwing an exception
        }
    }
    catch(int myAge)
    {
        cout << "Access Denied - As you are not old enough to vote." << endl;
        cout << "Your age is: " << myAge << endl;
    }
    
    return 0;
}