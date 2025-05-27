#include<bits/stdc++.h>
using namespace std;

struct Movie {
    string movie_name;
    float movie_price;
};

void displayMovies(vector<Movie>& movies) {
    cout << "Available Movies: " << endl;
    cout << "-------------------" << endl;

    for(int i = 0; i < movies.size(); i++) {
        cout << i + 1 << ". " << movies[i].movie_name << " - $" << movies[i].movie_price << endl;
    }

}


int main() {

    // Create a vector of Movie objects
    vector<Movie> movies = {
        {"Inception", 10.99},
        {"The Dark Knight", 12.50},
        {"Interstellar", 11.75},
        {"Parasite", 9.99},
        {"The Godfather", 14.00}
    };

    // Display the list of movies
    displayMovies(movies);

    int choice, ticketCount;

    // Ask the user to select a movie
    cout << "Select a movie by entering the corresponding number: " << endl;
    cin >> choice;

    if(choice < 1 || choice > movies.size()) {
        cout << "Invalid Choice! Exiting the system." << endl;
        return 0;
    }


    // Ask the user for the number of tickets
    cout << "Enter the number of tickets you want to book: " << endl;
    cin >> ticketCount;

    if(ticketCount <= 0) {
        cout << "Invalid Choice! Exiting the system." << endl;
        return 0;
    }


    // Calcuate the total amount of booking
    float totalAmount = movies[choice - 1].movie_price * ticketCount;
    
    // Display Information
    cout << "-------------------" << endl;
    cout << "You have selected: " << movies[choice - 1].movie_name << endl;
    cout << "Total tickets booked: " << ticketCount << endl;
    cout << "Total amount to be paid: $" << totalAmount << endl;
    cout << "Thank you for booking with us!" << endl;


    return 0;
}