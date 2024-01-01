// ----------------------------------------------------------
// ---------- CI411 Week 2
// ---------- Sohan Thupakula, UoB 23
// ----------------------------------------------------------

#include <iostream>

int main()
{
	// Variables 
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