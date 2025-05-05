#include<iostream>
using namespace std;

// 5! = 5 * 4 * 3 * 2 * 1 
// 5! = 5 * 4!
// n! = n * (n-1)!

int fact(int n) {
    if(n < 0) {
        return -1; // Error case for negative numbers
    }
    if((n == 0) || (n == 1)) {
        return 1;
    }
    else {
        return n * fact(n - 1); // Recursive case
    }

}


int main() {
    int num;
    cout << "Enter the value of number: " << endl;
    cin >> num;

    cout << fact(num) << endl;

    return 0;
}