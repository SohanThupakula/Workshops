#pragma once
// ----------------------------------------------
// Function Declarations

// ----------------------------------------------

#include <iostream>

void createShapes();

// ----------------------------------------------

void startScreen();
void exitScreen();
void waitForKeyPress();

class Circle
{
public:
	float radius = 0;
	const float PI = 3.14159;
	float getArea();
	float getCircumference();
};

// ----------------------------------------------

class Square
{
public:
	float sideLength = 0;
	float getArea();
	float getPerimeter();
};