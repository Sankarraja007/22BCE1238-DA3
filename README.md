# SUDOKU SOLVER (C++ with Qt)

# DESCRIPTION :
The Sudoku Solver project is a C++ application developed with the Qt framework that solves Sudoku puzzles programmatically. Sudoku is a popular logic-based puzzle game that involves filling a 9x9 grid with digits so that each column, each row, and each of the nine 3x3 sub-grids contains all of the digits from 1 to 9 without repetition. This application is designed to solve Sudoku puzzles of varying difficulty levels, helping users find solutions quickly and effortlessly.
For the application to work, the user shouldn't repeat any numbers in the same row, column, or 3x3 box.
After you input the numbers in their correct positions, clicking " SOLVE THE SUDOKU " will make the answer (solution grid) pop up next to the Question grid.

The Introductory Main Window:

![intro](https://github.com/Sankarraja007/Sudoku-Solver/assets/94210194/9d502604-4693-4cdb-afb0-22c6a2fc60a1)

After giving the inputs:

![intro 2](https://github.com/Sankarraja007/Sudoku-Solver/assets/94210194/cac5097b-4566-4d23-be1c-5684a6c50a79)

After pressing the "SOLVE THE SUDOKU" Button:

![solution](https://github.com/Sankarraja007/Sudoku-Solver/assets/94210194/15af06f9-5977-430d-884a-ecad0a2aca2b)


# Installation
Download "First release" from releases and extract the contents to a folder.

Then run Main.exe.

or

To use the Sudoku Solver, follow these steps:

1. Ensure you have the Qt framework installed on your system. Visit the Qt website to download and install Qt.
2. Clone the repository or download the source code.
3. Open the project in Qt Creator.
4. Build the project using the Qt build system.
5. Run the generated executable file.

# Usage
After the Mainwindow pop up opens, fill the 9x9 grid with combination of numbers such that the same number doesn't repeat itself in the same row, column, or the 3x3 box to which it belongs

Then, click on the "Solve the Sudoku" button, this will create the solution grid to the right of the Input grid.

For a Sudoku to have only 1 possible solution, there should be a minimum of 17 valid entries (non-repetitive in same row, column, or box) in the 9x9 grid.
But, if less than 17 valid entries are provided, the app will provide only 1 out of the many possible solutions.

# Contributing
Contributions are welcome and appreciated. To contribute to the Sudoku Solver project, follow these guidelines:

1. Fork the repository and set up the development environment.
2. Make your changes or add new features.
3. Test your changes thoroughly.
4. Submit a pull request describing your changes and their purpose.

# License
This project is licensed under https://github.com/Sankarraja007/Sudoku-Solver/blob/main/LICENSE

