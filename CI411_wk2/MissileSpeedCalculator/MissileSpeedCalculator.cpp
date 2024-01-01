// ----------------------------------------------------------
// ---------- CI411 Week 2
// ---------- Sohan Thupakula, UoB 23
// ----------------------------------------------------------

#include <iostream>

int main()
{
	// Variables
	double distance, speed, time;

	// Get the distance and speed
	std::cout << "Please enter the distance to target (m): ";
	std::cin >> distance;
	std::cout << "Please enter the speed of the missile (m/s): ";
	std::cin >> speed;

	// Calculate time to reach target
	time = distance / speed;

	// Output
	std::cout << "------------------------------------------------------------------------------" << std::endl;
	std::cout << "The missile will take " << time << " seconds to reach the target." << std::endl;

	return 0;
}