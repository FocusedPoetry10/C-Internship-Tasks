# Connect 4 Game

Connect 4 is a classic two-player board game where players take turns dropping colored discs into a vertical grid. The objective is to connect four discs in a row, column, or diagonal.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Gameplay](#gameplay)
- [How to Run](#how-to-run)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This project is a simple implementation of the Connect 4 game in C++. It provides a console-based interface where two players can take turns to play the game. The game board is a 6x7 grid, and players aim to connect four of their discs in a row to win.

## Features

- **Two-player gameplay:** Play against a friend with alternating turns.
- **Game board display:** Visual representation of the game board in the console.
- **Move validation:** Ensures moves are within bounds and columns are not full.
- **Win detection:** Checks for winning conditions in rows, columns, and diagonals.
- **Draw detection:** Identifies if the board is full and the game ends in a draw.

## Gameplay

1. **Start the Game:** Launch the program to start a new game.
2. **Player Turns:** Players take turns entering the column number where they want to drop their disc.
3. **Making Moves:** The disc will fall to the lowest available position in the chosen column.
4. **Winning the Game:** The game checks for four consecutive discs in a row, column, or diagonal after every move.
5. **Ending the Game:** The game ends when a player wins or the board is full, resulting in a draw.

## How to Run

1. **Clone the Repository:**

   ```bash
   git clone https://github.com/yourusername/connect4-game.git

2. **Navigate to the Project Directory:**

   ```bash
   cd connect4-game

3. **Compile the Code:**

   ```bash
   g++ -o Connect Connect.cpp

4. **Run the Program:**

   ```bash
   ./Connect

5. **Follow the On-Screen Instructions to play the game.**

## Contributing

Contributions are welcome! If you have suggestions for improvements or find any issues, please follow these steps:

1. **Fork the repository.**
2. **Create a new branch for your feature or bug fix.**
3. **Commit your changes.**
4. **Push to your forked repository.**
5. **Create a pull request describing your changes.**

## License

This project is licensed under the MIT License - see the LICENSE file for details.
