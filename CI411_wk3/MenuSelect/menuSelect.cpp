// -------------------------------------
// ---------- CI411 Week 3
// ---------- Sohan Thupakula, UoB 2023
// -------------------------------------


#include <iostream>

int main()
{
    std::cout << "Please select an option from the menu below:" << std::endl;
    std::cout << "1. Calulations of a circle" << std::endl;
    std::cout << "2. Calculate the range of a missile" << std::endl;
    std::cout << "3. Calculate the damage inflicted on a character" << std::endl;
    std::cout << "4. Exit" << std::endl;

    // Get the user's choice from the menu
    int choice;
    std::cout << "Please enter your choice: ";
    std::cin >> choice;


	// If the user picks option 1


	if (choice == 1)
    {// Declare variables
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
	}

	// If the user picks option 2

	else if (choice == 2)
	{// Variables
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
	}

	// If user picks option 3

	else if (choice == 3)
	{// Variables 
		int damage, health, shield;

		// Get the input
		std::cout << "-------------- Character Damage Calculator --------------" << std::endl;
		std::cout << "Please input the attack value: ";
		std::cin >> damage;
		std::cout << "Please input the shield strength (0% to 100%): ";
		std::cin >> shield;
		std::cout << "Please input the health value: ";
		std::cin >> health;

		// Calculate the damage inflicted
		damage = damage * (1 - (shield / 100.0));
		health = health - damage;

		// Output the result
		std::cout << "The character has taken " << damage << " damage." << std::endl;
		std::cout << "The character's health is now " << health << "." << std::endl;
	}

	// If user picks option 4

	else if (choice == 4)
	{
		std::cout << "Exiting the program..." << std::endl;

			return 0;
	}
}