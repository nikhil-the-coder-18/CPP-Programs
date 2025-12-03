/* 42 : Random Number Guess Game.
   Date : 27/09/2025
   Author : Nikhil  */


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int i, guess;
    srand(time(0)); // Seed with current time

    // Generate random number between 1 and 100
    int randomNum = rand() % 100 + 1;

    cout << endl;

    for (i = 1; i <= 25; i++) {
        cout << "=";
    }

    cout << "\nGuess The Random Number Game !!!" << endl;

    for (i = 1; i <= 25; i++) {
        cout << "=";
    }
    cout << endl;

    cout << "Computer picked a random number between 1 and 100..." << endl;

    while (true) {
        cout << "Guess the number: ";
        cin >> guess;

        if (guess > randomNum && guess >= 0) {
            cout << "The number is smaller than your guess!" << endl;
        }
        else if (guess < randomNum && guess >= 0) {
            cout << "The number is bigger than your guess!" << endl;
        }
        else if (guess == randomNum) {
            cout << "You guessed correctly!!! The number was: " << randomNum << endl;
            break; // end loop after correct guess
        }
        else {
            cout << "Invalid number selection..." << endl;
        }
    }

    return 0;
}
