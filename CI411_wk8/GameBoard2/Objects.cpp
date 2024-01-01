// -----------------------------------------------
// Function Definitions

// Libraries to include

#include <iostream>
#include "Objects.h"
using namespace std;

// Global Variables
const int boardWidth = 20;
const int boardHeight = 15;
BoardSquare squares[boardHeight][boardWidth];

// -----------------------------------------------

void createBoard()
{
	for (int row = 0; row < boardHeight; row++)
	{
		for (int col = 0; col < boardWidth; col++)
		{
			squares[row][col].xPosition = col;
			squares[row][col].yPosition = row;

			// Set symbols and limits of the edge
			if (row == 0 || row == boardHeight - 1)
			{
				squares[row][col].symbol = '=';
				squares[row][col].accessible = false;
			}
			else
			{
				if (col == 0 || col == boardWidth - 1)
					squares[row][col].symbol = '|';
				squares[row][col].accessible = false;
			}
		}
	}
}

// -----------------------------------------------

void displayBoard()
{
	printf("\n The Game Board \n\n");

	for (int row = 0; row < boardHeight; row++)
	{
		for (int col = 0; col < boardWidth; col++)
		{
			cout << "  " << squares[row][col].symbol;
		}
		cout << "\n";
	}
}