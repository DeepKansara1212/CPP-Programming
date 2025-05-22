// Square Pattern

// 1 2 3 4
// 1 2 3 4 
// 1 2 3 4
// 1 2 3 4


// Outer For Loop: 1 to n
// Inner Loop: used to fill the data of the row

#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of rows: ";
    cin >> n; 

    cout << "Square Pattern:" << endl;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        
    }

    return 0;
}




// 1st Row (i = 1): 1 2 3 4 
// 2nd Row (i = 2): 1 2 3 4