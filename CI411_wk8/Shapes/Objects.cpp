// --------------------------------------------------------------
// Function Definitions

// Libraries to include

#include <iostream>
#include "Objects.h"
using namespace std;

// --------------------------------------------------------------

void createShapes()
{
	Circle circle1;
	circle1.radius = 5;
	cout << "\n A circle with radius " << circle1.radius << " has an area of " << circle1.getArea() << " and a circumference of " << circle1.getCircumference() << endl;

	Circle circle2;
	circle1.radius = 7;
	cout << "\n A circle with radius " << circle1.radius << " has an area of " << circle1.getArea() << " and a circumference of " << circle1.getCircumference() << endl;

	Circle circle3;
	circle1.radius = 13;
	cout << "\n A circle with radius " << circle1.radius << " has an area of " << circle1.getArea() << " and a circumference of " << circle1.getCircumference() << endl;

	Square square1;
	square1.sideLength = 5;
	cout << "\n A square with side length " << square1.sideLength << " has an area of " << square1.getArea() << " and a perimeter of " << square1.getPerimeter() << endl;

	Square square2;
	square1.sideLength = 12;
	cout << "\n A square with side length " << square1.sideLength << " has an area of " << square1.getArea() << " and a perimeter of " << square1.getPerimeter() << endl;

	Square square3;
	square1.sideLength = 34;
	cout << "\n A square with side length " << square1.sideLength << " has an area of " << square1.getArea() << " and a perimeter of " << square1.getPerimeter() << endl;

}

// --------------------------------------------------------------

float Circle::getArea()
{
	return PI * radius * radius;
}

// --------------------------------------------------------------

float Circle::getCircumference()
{
	return 2 * PI * radius;
}

// --------------------------------------------------------------

float Square::getArea()
{
	return sideLength * sideLength;
}

// --------------------------------------------------------------

float Square::getPerimeter()
{
	return 4 * sideLength;
}

// --------------------------------------------------------------

void startScreen()
{
	cout << "===============================" << endl;
	cout << "===== MAIN MENU ===== " << endl;
	cout << "==================================" << endl;
	cout << "===== Welcome ===== " << endl;
	cout << " " << endl;
}

// --------------------------------------------------------------

void exitScreen()
{
	cout << " " << endl;
	cout << "===== Goodbye ===== " << endl;
	cout << " " << endl;
	cout << "==================================" << endl;
	cout << "===== MAIN MENU ===== " << endl;
	cout << "===============================" << endl;
}

// --------------------------------------------------------------

void waitForKeyPress()
{
	cout << "\n\n Press any button to continue: ";
	int waitForPress;
	cin >> waitForPress;
	cin.clear();
	cin.ignore(100, '\n');
}