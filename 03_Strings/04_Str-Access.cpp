#include<iostream>
#include<string>
using namespace std;

int main() {
    //         0 1 2 3 4 5 6 7 8 9 10 11 
    string str = "Hello, World";
    cout << str[5] << endl;

    str[5] = ' ';
    cout << str << endl;

    cout << str[str.length() - 1] << endl;
    // str[12 - 1]
    // str[11]
    // 'd'
    
    return 0;
}