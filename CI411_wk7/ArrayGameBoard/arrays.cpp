//Variable Definitions

// Libraries to inclue

#include <iostream>
#include "arrays.h"
using namespace std;

// Global Variables

bool gameOver = false;
const int boardWidth = 20;
const int boardHeight = 15;
char gameBoard[boardHeight][boardWidth];

// --------------------------------------------------

void arrayGameBoard()
{
	createBoard();

	while (!gameOver)
	{
		displayBoard();
		waitforKeyPress();
		populateBoard();
		displayBoard();
		waitforKeyPress();
		playAgain();
	}
}

// --------------------------------------------------

void createBoard()
{
	for (int row = 0; row < boardHeight; row++)
	{
		for (int col = 0; col < boardWidth; col++)
		{
			if (row == 0 || row == boardHeight - 1)
			{
				gameBoard[row][col] = '=';
			}
			else
			{
				if (col == 0 || col == boardWidth - 1)
				{
					gameBoard[row][col] = '|';
				}
				else
				{
					gameBoard[row][col] = '-';
				}
			}
		}
	}
}

// --------------------------------------------------

void displayBoard()
{
	system("cls");
	printf("\n ---------- Game Board ---------- \n");
	cout << " GameOver: " << gameOver;

	cout << "\n";
	for (int row = 0; row < boardHeight; row++)
	{
		for (int col = 0; col < boardWidth; col++)
		{
			cout << "  " << gameBoard[row][col];
		}
		cout << "\n";
	}
}

// --------------------------------------------------

void populateBoard()
{
	cout << "\n Populate Board";
	cout << "\n How many objects would you like to add to the board? ";

	int objectSpawnCount = 0;

	if (cin >> objectSpawnCount)
	{
		for (int i = 0; i < objectSpawnCount; i++)
		{
			int row = rand() % (boardHeight - 2) + 1;
			int col = rand() % (boardWidth - 2) + 1;

			gameBoard[row][col] = 'X';
		}
	}

	cin.clear();
	cin.ignore(100, '\n');
}

// --------------------------------------------------

void waitforKeyPress()
{
	cout << "\n\n Press any button to continue: ";
	int waitForPress;
	cin >> waitForPress;
	cin.clear();
	cin.ignore(100, '\n');
}

// --------------------------------------------------

void playAgain()
{
	cout << "\n\n Would you like to play again? (Y/N) ";
	char playAgain;
	cin >> playAgain;

	if (playAgain == 'Y' || playAgain == 'y')
	{
		gameOver = false;
	}
	else
	{
		gameOver = true;
	}
}

// --------------------------------------------------

void startScreen()
{
	cout << "===============================" << endl;
	cout << "===== MAIN MENU ===== " << endl;
	cout << "==================================" << endl;
	cout << "===== Welcome ===== " << endl;
	cout << " " << endl;
}

// --------------------------------------------------

void endScreen()
{
	cout << "\n\n\n" << std::endl;
	cout << "================================== \n" << endl;
	cout << "===== Thank you for playing ===== \n" << endl;
	cout << "================================== \n" << endl;
}