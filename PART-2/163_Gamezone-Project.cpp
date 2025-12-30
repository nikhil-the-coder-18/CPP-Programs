#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void NumberGuessing();
void RockPaperScissors();
void QuizGame();

int main()
{
    int choice;

    srand(time(0));

    do
    {
        cout << "\n==================================" << endl;
        cout << "******** WELCOME TO GAME ZONE ********" << endl;
        cout << "==================================\n"
             << endl;

        cout << "Select What You Want! " << endl;
        cout << "1. Number Guessing Game" << endl;
        cout << "2. Rock Paper Scissors" << endl;
        cout << "3. Quiz Game" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            NumberGuessing();
            break;

        case 2:
            RockPaperScissors();
            break;

        case 3:
            QuizGame();
            break;

        case 4:
            cout << "\nThank you for playing GAME ZONE!" << endl;
            break;

        default:
            cout << "\nInvalid Choice!" << endl;
            break;
        }
    } while (choice != 4);
}

void NumberGuessing()
{
    int random_number = (std::rand() % 100) + 1;
    cout << "\n******** WELCOME TO Number Guessing Game ********\n"
         << endl;
    cout << "Random Number is Genarated Beetween 1 to 100." << endl;
    cout << "You have to guess the number." << endl;
    cout << "Player with low attempt is the winner..." << endl;

    int attempt = 0;
    int guess;

    do
    {
        cout << "\nGuess the Number: ";
        cin >> guess;

        if (guess > random_number)
        {
            cout << "Hint: Try a LOWER number!" << endl;
        }
        else
        {
            cout << "Hint: Try a HIGHER number!" << endl;
        }
        attempt++;
    } while (guess != random_number);

    cout << "\n🎉 Congratulations! You Guessed Right : " << guess << endl;
    cout << "Your Attempts : " << attempt << endl;
}

void RockPaperScissors()
{
    int user, computer;

    cout << "\n--- ROCK PAPER SCISSORS ---" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "Enter your choice: ";
    cin >> user;

    computer = (rand() % 3) + 1;

    if (computer == 1)
    {
        cout << "Rock" << endl;
    }
    else if (computer == 2)
    {
        cout << "Paper" << endl;
    }
    else
    {
        cout << "Scissors" << endl;
    }

    if (user == computer)
    {
        cout << "It's a DRAW!" << endl;
    }
    else if ((user == 1 && computer == 3) || (user == 2 && computer == 1) || (user == 3 && computer == 2)) {
        cout << "🎉 You WIN!" << endl;
    } else {
         cout << "😢 You LOSE!" << endl;
    }
}

void QuizGame()
{
    int score = 0;
    char ans;

    cout << "\n--- QUIZ GAME ---" << endl;

    cout << "Q1. C++ is developed by?\n";
    cout << "A) Dennis Ritchie\nB) Bjarne Stroustrup\nC) James Gosling\n";
    cin >> ans;
    if (ans == 'B' || ans == 'b') score++;

    cout << "\nQ2. Which symbol is used for single line comment?\n";
    cout << "A) /* */\nB) //\nC) #\n";
    cin >> ans;
    if (ans == 'B' || ans == 'b') score++;

    cout << "\nQ3. Which loop runs at least once?\n";
    cout << "A) for\nB) while\nC) do-while\n";
    cin >> ans;
    if (ans == 'C' || ans == 'c') score++;

    cout << "\nYour Final Score: " << score << "/3" << endl;
}
