// ----------------------------------------------------------
// ---------- CI411 Week 2
// ---------- Sohan Thupakula, UoB 23
// ----------------------------------------------------------

#include <iostream>

int main()
{
	// Declare variables
	double radius, area, circumference, diameter;

	// Get radius from user
	std::cout << "Enter radius: ";
	std::cin >> radius;

	// Calculate area and circumference and diameter
	area = 3.14159 * radius * radius;
	circumference = 2 * 3.14159 * radius;
	diameter = 2 * radius;

	// Display results
	std::cout << "Area: " << area << std::endl;
	std::cout << "Circumference: " << circumference << std::endl;
	std::cout << "Radius: " << radius << std::endl;
	std::cout << "Diameter: " << diameter << std::endl;

	return 0;

}