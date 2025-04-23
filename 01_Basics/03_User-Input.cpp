#include<iostream>
using namespace std;

int main() {
    // Area = length * Width;
    int length;
    int width;
    int area;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    cout << "Area of Recatangle: " << length * width << endl;

    return 0;
}