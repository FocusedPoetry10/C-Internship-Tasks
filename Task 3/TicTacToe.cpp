#include <iostream>
using namespace std;

char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
char currentMarker;
int currentPlayer;
string player1, player2;

void drawBoard() {
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}

bool placeMarker(int slot) {
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;
    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = currentMarker;
        return true;
    }
    else {
        return false;
    }
}

int winner() {
    for (int i = 0; i < 3; i++) {
        
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') return currentPlayer;
        
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') return currentPlayer;
    }
   
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') return currentPlayer;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') return currentPlayer;

    return 0;
}

void swapPlayerAndMarker() {
    if (currentMarker == 'X') currentMarker = 'O';
    else currentMarker = 'X';

    if (currentPlayer == 1) currentPlayer = 2;
    else currentPlayer = 1;
}

void game() {
    cout << "Enter Player 1's name: ";
    cin >> player1;
    cout << "Enter Player 2's name: ";
    cin >> player2;

    cout << player1 << ", choose your marker (X or O): ";
    char markerP1;
    cin >> markerP1;

    currentPlayer = 1;
    currentMarker = markerP1;

    if (markerP1 == 'X') currentMarker = 'O';
    else currentMarker = 'X';

    drawBoard();
    int playerWon;

    for (int i = 0; i < 9; i++) {
        string currentPlayerName = (currentPlayer == 1) ? player1 : player2;
        cout << "It's " << currentPlayerName << "'s turn. Enter your slot (1-9): ";
        int slot;
        cin >> slot;

        if (slot < 1 || slot > 9) {
            cout << "That slot is invalid! Try another slot!" << endl;
            i--;
            continue;
        }

        if (!placeMarker(slot)) {
            cout << "That slot is occupied! Try another slot!" << endl;
            i--;
            continue;
        }
        drawBoard();
        playerWon = winner();

        if (playerWon == 1) {
            cout << player1 << " wins!" << endl;
            break;
        }
        if (playerWon == 2) {
            cout << player2 << " wins!" << endl;
            break;
        }

        swapPlayerAndMarker();
    }
    if (playerWon == 0) cout << "That's a tie game!" << endl;
}

int main() {
    game();
    return 0;
}
