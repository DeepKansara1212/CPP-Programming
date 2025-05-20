#include<bits/stdc++.h>
using namespace std;


int main() {
    // Seed Random Number Generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber =  rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to the Random Guessing Game!" << endl;
    cout << "I have selected a random number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;
    
    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if(guess < randomNumber) {
            cout << "Too low! Try Again." << endl;
        }
        else if(guess > randomNumber) {
            cout << "Too High! Try Again." << endl;
        }
        else {
            cout << "Congratulations! You've guessed the number correctly in " << attempts << " attempts." << endl;
        }
    } while (guess != randomNumber);
    
    return 0;
}