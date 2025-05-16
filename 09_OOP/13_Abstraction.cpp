#include<iostream>
#include<string>
using namespace std;


// Abstract Class
// Base Class - Tea
class Tea {
    public:
        virtual void prepareIngredients() = 0;      // Virtual Function
        virtual void brew() = 0;                    // Virtual Function
        virtual void serve() = 0;                   // Virtual Function

        void makeTea() {                            
            prepareIngredients();
            brew();
            serve();
        }
};

// Derived Class - Green Tea
class GreenTea : public Tea {
    private:
        void prepareIngredients() {
            cout << "Preparing green tea leaves and water." << endl;
        }

        void brew() {
            cout << "Brewing green tea." << endl;
        }

        void serve() {
            cout << "Serving green tea." << endl;
        }
};


// Derived Class - Lemon Tea
class LemonTea : public Tea {
    private:
        void prepareIngredients() {
            cout << "Preparing lemon tea leaves and water." << endl;
        }

        void brew() {
            cout << "Brewing lemon tea." << endl;
        }

        void serve() {
            cout << "Serving lemon tea." << endl;
        }
};



int main() {

    GreenTea greenTea;
    LemonTea lemonTea;

    greenTea.makeTea();
    // lemonTea.makeTea();

    return 0;
}