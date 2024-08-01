# Tic Tac Toe Game

Welcome to my Tic Tac Toe game developed using C++! This classic game allows two players, X and O, to compete on a 3x3 grid.

## Features

- **Player vs Player:** Two players can play against each other.
- **Input Validation:** Ensures players can only make valid moves.
- **Win Detection:** Automatically detects a win or a tie.
- **Clear and Interactive UI:** Text-based interface that updates the board after each move.

## Getting Started

### Prerequisites

- A C++ compiler (e.g., GCC, Clang)
- A terminal or command prompt

### Installation

1. **Clone the repository:**

    ```bash
    git clone https://github.com/yourusername/tic-tac-toe.git
    ```

2. **Navigate to the project directory:**

    ```bash
    cd tic-tac-toe
    ```

3. **Compile the code:**

    ```bash
    g++ -o tic_tac_toe main.cpp
    ```

4. **Run the game:**

    ```bash
    ./tic_tac_toe
    ```

## How to Play

1. The game starts with an empty 3x3 board.
2. Players take turns to input their moves. Player X goes first.
3. Enter the position number (1-9) where you want to place your mark:
    ```
     1 | 2 | 3
    ---+---+---
     4 | 5 | 6
    ---+---+---
     7 | 8 | 9
    ```
4. The game will update the board and check for a winner or a tie after each move.
5. The game ends when one player aligns three of their marks in a row, column, or diagonal, or when the board is completely filled, resulting in a draw.

# Contributing
Contributions are welcome! Please fork the repository and create a pull request with your changes.

# License
This project is licensed under the MIT License - see the LICENSE file for details.

# Acknowledgments
- Inspired by the classic Tic Tac Toe game.
- Thanks to the C++ community for their continuous support and resources.
