#include<iostream>
#include<string.h>
using namespace std;


enum Days {sunday = 0, monday = 1, tuesday = 2, wednesday = 3};


int main() {
    Days Day = sunday;

    switch (Day) {
        case sunday:
            cout << "Today is Sunday" << endl;
            break;
        case monday:
            cout << "Today is monday" << endl;
            break;
        case tuesday:
            cout << "Today is tuesday" << endl;
            break;
        case wednesday:
            cout << "Today is wednesday" << endl;
            break;
    }

    return 0;
}