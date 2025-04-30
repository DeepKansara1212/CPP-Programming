#include<iostream>
using namespace std;

int main() {
                //       0      1       2       3        4 
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    // string cars[5];
    // cars[0] = "Volvo";
    // cars[1] = "BMW";

    // cars[5] = "Audi";
    // cout << cars[5] << endl;

    cout << sizeof(cars[0]) << endl; 
    cout << sizeof(cars[1]) << endl; 
    cout << sizeof(cars[2]) << endl; 
    cout << sizeof(cars[3]) << endl; 

    // for loop
    // for(int i = 0; i < 5; i++) {
    //     cout << cars[i] << endl;
    // }


    // for each loop
    // for(string car : cars) {
    //     cout << car << endl;
    // }

    return 0;
}