#include<iostream>
#include<vector>
using namespace std;

int main() {
             //   0  1  2  3  4
    int arr[5] = {1, 2, 3, 4, 5};

    vector<string> students = {"Alice", "Bob", "Charlie", "David", "Eve"};


    arr[2] = 10;

    cout << arr[2] << endl;

    return 0;
}