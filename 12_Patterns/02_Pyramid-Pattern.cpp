// Square Pattern

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4

// Outer For Loop: 1 to n
// Inner Loop: used to fill the data of the row

#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of rows: ";
    cin >> n; 

    cout << "Pyramid Pattern:" << endl;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}



// 1st Row (i = 1): 1
// 2nd Row (i = 2): 1 2
// 3rd Row (i = 3): 1 2 3
// 4th Row (i = 4): 1 2 3 4