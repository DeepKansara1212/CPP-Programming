#include<iostream>
using namespace std; 

int addition(int* a, int* b) {
    return *a + *b;
}

int main() {
    int a = 10, b = 20;
    cout << addition(&a, &b) << endl;

    return 0;
}