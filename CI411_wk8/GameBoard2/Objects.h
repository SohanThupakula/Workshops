#pragma once
// ----------------------------------------------
// Function Declarations

// ----------------------------------------------

#include <iostream>

void createBoard();
void displayBoard();

// ----------------------------------------------

class BoardSquare
{
public:
	char symbol = '.';
	bool accessible = true;
	int xPosition = 0; int yPosition = 0;
};