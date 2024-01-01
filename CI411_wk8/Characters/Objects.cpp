// -----------------------------------------------
// Function Definitions

// Libraries to include

#include <iostream>
#include "Objects.h"
#include <string>

using namespace std;

// ----------------------------------------------

void createCharacters()
{
	// Seeding random number generator
	srand(static_cast<unsigned int>(time(0)));

	// Main Character Stats

	Character cedric;
	cedric.name = "Cedric the Brave";
	cedric.health = 100;
	cedric.speed = 10;
	cedric.stamina = 50;
	cedric.strength = 20;
	cedric.xp = 50;
	cedric.weapon = "Sword";
	cedric.armed = true;
	cedric.isAlive = true;

	cout << "\n ======================= MAIN CHARACTER'S STATS =======================" << endl;
	cout << "\n" << endl;
	cout << "\n The Main Character's name is " << cedric.name << ", his main weapon is a " << cedric.weapon << "." << endl;
	cout << "\n His health is " << cedric.health << " and his speed is " << cedric.speed << "." << endl;
	cout << "\n His stamina and strength are " << cedric.stamina << " and " << cedric.strength << " respectively." << endl;
	cout << "\n His current XP level is: " << cedric.xp << endl;
	cout << "\n Is he armed?: " << cedric.armed << endl;
	cout << "\n Is he alive?: " << cedric.isAlive << endl;
	cout << "\n" << endl;
	cout << " =====================================================================" << endl;
	cout << "\n" << endl;

	// NPC stats (randomized)
	Character npcs[5];

	for (int i = 0; i < sizeof(npcs) / sizeof(npcs[0]); i++)
	{
		npcs[i].name = "NPC_" + to_string(i + 1);
		npcs[i].health = rand() % 100 + 1;
		npcs[i].speed = rand() % 50 + 1;
		npcs[i].stamina = rand() % 50 + 1;
		npcs[i].strength = rand() % 100 + 1;
		npcs[i].xp = rand() % 50 + 1;
		npcs[i].armed = rand() % 2;
		npcs[i].isAlive = true;

		cout << "\n ======================= NPC CHARACTER'S STATS =======================" << endl;
		cout << "\n" << endl;
		cout << "\n The NPC's name is " << npcs[i].name << ", his main weapon is a " << npcs[i].weapon << "." << endl;
		cout << "\n His health is " << npcs[i].health << " and his speed is " << npcs[i].speed << "." << endl;
		cout << "\n His stamina and strength are " << npcs[i].stamina << " and " << npcs[i].strength << " respectively." << endl;
		cout << "\n His current XP level is: " << npcs[i].xp << endl;
		cout << "\n Is he armed?: " << npcs[i].armed << endl;
		cout << "\n Is he alive?: " << npcs[i].isAlive << endl;
	}

}

