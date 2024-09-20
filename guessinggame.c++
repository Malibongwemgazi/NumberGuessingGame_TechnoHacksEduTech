#include<iostream>
using namespace std;

int main() {
    int numberToGuess;
    int userGuess;
    int numberOfTries = 0;

    // Generate a random number between 1 and 100
    srand(time(0));
    numberToGuess = rand() % 100 + 1;

    cout << "Welcome to the number guessing game!\n";
    cout << "I'm thinking of a number between 1 and 100.\n";
    cout << "Try to guess the number.\n";

    while (true) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        numberOfTries++;

        if (userGuess < numberToGuess) {
            cout << "Too low! Try a higher number.\n";
        } else if (userGuess > numberToGuess) {
            cout << "Too high! Try a lower number.\n";
        } else {
            cout << " Congratulations! You guessed the number in " << numberOfTries << " tries.\n";
            break;
        }
    }

    return 0;
}
