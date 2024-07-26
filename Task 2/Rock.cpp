#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(static_cast<unsigned int>(time(0)));

    int userChoice;
    int computerChoice;


    cout << "Rock, Paper, Scissors Game\n";
    cout << "1. Rock\n2. Paper\n3. Scissors\n";
    cout << "Enter your choice (1, 2, 3): ";
    cin >> userChoice;


    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice. Please enter 1, 2, or 3.\n";
        return 1;
    }


    computerChoice = rand() % 3 + 1;

   
    cout << "You chose: " << (userChoice == 1 ? "Rock" : userChoice == 2 ? "Paper" : "Scissors") << endl;
    cout << "Computer chose: " << (computerChoice == 1 ? "Rock" : computerChoice == 2 ? "Paper" : "Scissors") << endl;

 
    if (userChoice == computerChoice) {
        cout << "It's a draw!\n";
    } else if ((userChoice == 1 && computerChoice == 3) || 
               (userChoice == 2 && computerChoice == 1) || 
               (userChoice == 3 && computerChoice == 2)) {
        cout << "You win!\n";
    } else {
        cout << "Computer wins!\n";
    }

    return 0;
}
