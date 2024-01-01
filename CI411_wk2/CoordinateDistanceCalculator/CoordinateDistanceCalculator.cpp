// ----------------------------------------------------------
// ---------- CI411 Week 2
// ---------- Sohan Thupakula, UoB 23
// ----------------------------------------------------------

#include <iostream>

int main()
{
	// Variables
	double x1, y1, x2, y2, distance;

	// Get the coordinates from the user
	std::cout << "Please enter the x coordinate of the first point: ";
	std::cin >> x1;
	std::cout << "Please enter the y coordinate of the first point: ";
	std::cin >> y1;
	std::cout << "Please enter the x coordinate of the second point: ";
	std::cin >> x2;
	std::cout << "Please enter the y coordinate of the second point: ";
	std::cin >> y2;

	// Calculate distance between the two points
	distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	// Output
	std::cout << "------------------------------------------------------------------------------" << std::endl;
	std::cout << "The distance between the two points is " << distance << "." << std::endl;

	return 0;

}