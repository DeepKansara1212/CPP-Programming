#include<iostream>
using namespace std;

int main() {

    // 2D array declaration and initialization
    int arr[2][3] = { 
        {1, 2, 3}, 
        {4, 5, 6} 
    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Element at arr[" << i << "][" << j << "]: " << arr[i][j] << endl;
        }
    }

    // Accessing elements of the 2D array
    cout << "Element at arr[0][0]: " << arr[0][0] << endl;

    // 3D array declaration and initialization
    int arr3D[2][2][2] = { 
        { 
            {1, 2}, 
            {3, 4} 
        }, 
        { 
            {5, 6}, 
            {7, 8} 
        } 
    };

    return 0;
}