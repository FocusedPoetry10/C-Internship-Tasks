#include <iostream>
#include <vector>

using namespace std;

const int ROWS = 6;
const int COLS = 7;
const char EMPTY = '.';
const char PLAYER1 = 'X';
const char PLAYER2 = 'O';

void printBoard(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            cout << cell << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

bool isValidMove(const vector<vector<char>>& board, int col) {
    return col >= 0 && col < COLS && board[0][col] == EMPTY;
}

bool makeMove(vector<vector<char>>& board, int col, char player) {
    if (!isValidMove(board, col)) return false;
    for (int row = ROWS - 1; row >= 0; --row) {
        if (board[row][col] == EMPTY) {
            board[row][col] = player;
            return true;
        }
    }
    return false;
}

bool checkDirection(const vector<vector<char>>& board, int row, int col, int dRow, int dCol, char player) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        int r = row + i * dRow;
        int c = col + i * dCol;
        if (r < 0 || r >= ROWS || c < 0 || c >= COLS || board[r][c] != player) {
            return false;
        }
        ++count;
    }
    return count == 4;
}

bool checkWin(const vector<vector<char>>& board, char player) {
    for (int row = 0; row < ROWS; ++row) {
        for (int col = 0; col < COLS; ++col) {
            if (board[row][col] == player) {
                if (checkDirection(board, row, col, 1, 0, player) ||
                    checkDirection(board, row, col, 0, 1, player) ||
                    checkDirection(board, row, col, 1, 1, player) ||
                    checkDirection(board, row, col, 1, -1, player))
                {
                    return true;
                }
            }
        }
    }
    return false;
}

bool isBoardFull(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == EMPTY) return false;
        }
    }
    return true;
}

int main() {
    vector<vector<char>> board(ROWS, vector<char>(COLS, EMPTY));
    char currentPlayer = PLAYER1;
    bool gameOver = false;

    while (!gameOver) {
        printBoard(board);
        cout << "Player " << currentPlayer << ", enter column (0-" << COLS - 1 << "): ";
        int col;
        cin >> col;

        if (makeMove(board, col, currentPlayer)) {
            if (checkWin(board, currentPlayer)) {
                printBoard(board);
                cout << "Player " << currentPlayer << " wins!" << endl;
                gameOver = true;
            } else if (isBoardFull(board)) {
                printBoard(board);
                cout << "It's a draw!" << endl;
                gameOver = true;
            } else {
                currentPlayer = (currentPlayer == PLAYER1) ? PLAYER2 : PLAYER1;
            }
        } else {
            cout << "Invalid move. Try again." << endl;
        }
    }

    return 0;
}