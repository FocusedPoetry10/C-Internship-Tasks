#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
    
    std::srand(std::time(0)); 

    int numberToGuess = std::rand() % 100 + 1; 
    int userGuess = 0;
    int numberOfTries = 0;

    std::cout << "Welcome to the Guess a Number Game!\n";
    std::cout << "I have chosen a number between 1 and 100. Can you guess what it is?\n";

    // Game loop
    while (userGuess != numberToGuess) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        numberOfTries++;

        if (userGuess > numberToGuess) {
            std::cout << "Too high! Try again.\n";
        } else if (userGuess < numberToGuess) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number in " << numberOfTries << " tries.\n";
        }
    }

    return 0;
}
