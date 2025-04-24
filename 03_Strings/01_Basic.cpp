#include<iostream>
#include<string>
using namespace std;

int main() {
    string str1 = "Hello ";
    string str2 = "World!";
    cout << str1 << endl;
    cout << str2 << endl;

    // string str3 = str1 + str2;
    string str3 = str1.append(str2);
    cout << str3 << endl;

    return 0;
} 