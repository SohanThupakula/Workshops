#pragma once
// ----------------------------------------------
// Function Declarations

// ----------------------------------------------

#include <iostream>

void createCharacters();

// ----------------------------------------------

class Character
{
public:
	float health = 100, speed = 10, stamina = 50, strength = 20;
	int xp = 50;
	std::string name = "Cedric the Brave", weapon = "Sword";
	bool armed = true, isAlive = true;
};