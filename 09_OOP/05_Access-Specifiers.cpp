#include<iostream>
using namespace std;

class Students {
    // public members are accessible from outside the class.
    public:
        int roll_no;
        string name;

    // private members are not accessible from outside the class.
    private:
        double aadhar_no;
        string password;
};

int main() {
    Students student1;

    student1.roll_no = 1;
    student1.name = "John";

    // Aadhar_no & password are private members of the class. That's why we can not access them from the outside of the class.
    // student1.aadhar_no = 12345656789;

    return 0;
}