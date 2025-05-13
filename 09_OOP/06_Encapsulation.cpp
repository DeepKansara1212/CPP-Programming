#include<iostream>
#include<string>
using namespace std;


class Students {
    private:
        double aadhar_no;

    public:
        string name;
        int roll_no;

        // Setter method for aadhar_no
        void setAadharNo(double aadhar) {
            aadhar_no = aadhar;
        }


        // Getter method for aadhar_no
        double getAadharNo() {
            return aadhar_no;
        }

};


int main() {

    Students student1;
    student1.name = "John Doe";
    student1.roll_no = 101;

    student1.setAadharNo(123456789012);
    cout << student1.getAadharNo() << endl;

    return 0;
}