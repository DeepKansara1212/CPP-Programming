
/*
0 0 0 0 *
0 0 0 * * 
0 0 * * *
0 * * * *
* * * * *

n = 5

1st row => 1 star + (5-1) zeros
2nd row => 2 stars + (5-2) zeros
3rd row => 3 stars + (5-3) zeros

ith row => m stars + (n-i) zeros
*/

#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of rows: ";
    cin >> n; 

    cout << "Flipped Pyramid Pattern:" << endl;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j <= n - i) {
                cout << " " << " ";
            }
            else {
                cout << "*" << " ";
            }
        }
        cout << endl;
    }

    return 0;
}


/*
n= 5
i = 1 => 0 0 0 0 *
i = 2 => 0 0 0 * *
i = 3 => 0 0 * * *
i = 4 => 0 * * * *
i = 5 => * * * * *
*/