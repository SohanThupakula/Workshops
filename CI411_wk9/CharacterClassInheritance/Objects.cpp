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
	Character player1("Cedric", 100);
	Character player2;

	Minion serf1;
	Minion serf2("NPC Serf", "Boss1", "Wood", 10);

	Warrior warrior1;
	Warrior warrior2("NPC Warrior", "Boss1", "Sword", 1, 10, 5);

	Boss boss1;
	Boss boss2("Boss Man", "Sword", 1, 10, 10);
}

// Constructor

Character::Character()
{
	cout << "\n Character Created";
}

// Constructor with parameters - Overload
Character::Character(string nameSet, float healthSet)
{
	cout << "\n Character Created with Parameters";
	health = healthSet;
	name = nameSet;
}

void Character::displayStats()
{
	cout << "\n Character " << name << " has " << health << " health.";
	cout << "\n Is Character alive?: " << isAlive << endl;
}

// Derived Class Methods

NPC::NPC()
{
	cout << "\n NPC Created";
}

Minion::Minion()
{
	cout << "\n Minion Created";
}

Minion::Minion(string nameSet, string leaderSet, string resourceSet, int capacitySet)
{
	name = nameSet;
	leader = leaderSet;
	resourceGathering = resourceSet;
	capacity = capacitySet;
	isTarget = false;

	cout << "\n";
	cout << "\n==========================================================";
	cout << "\n Minion is called " << name;
	cout << "\n Leader: " << leader;
	cout << "\n Resource: " << resourceGathering;
	cout << "\n Carrying Capacity: " << capacity;
	cout << "\n==========================================================";
	cout << "\n";
}

Warrior::Warrior()
{
	cout << "\n Warrior Created";
}

Warrior::Warrior(string nameSet, string leaderSet, string weaponSet, float healthSet, float coolDownSet, float damageSet)
{
	name = nameSet;
	leader = leaderSet;
	weapon = weaponSet;
	coolDown = coolDownSet;
	damage = damageSet;
	isTarget = true;

	cout << "\n";
	cout << "\n==========================================================";
	cout << "\n Warrior is called " << name;
	cout << "\n Leader: " << leader;
	cout << "\n Weapon: " << weapon;
	cout << "\n Cool Down: " << coolDown;
	cout << "\n Damage: " << damage;
	cout << "\n==========================================================";
	cout << "\n";
}

Boss::Boss()
{
	cout << "\n Boss Created";
}

Boss::Boss(string nameSet, string weaponSet, float healthSet, float coolDownSet, float damageSet)
{
	name = nameSet;
	weapon = weaponSet;
	coolDown = coolDownSet;
	damage = damageSet;
	isTarget = true;

	cout << "\n";
	cout << "\n==========================================================";
	cout << "\n Boss is called " << name;
	cout << "\n Weapon: " << weapon;
	cout << "\n Boss Level: " << bossLevel;
	cout << "\n Boss Home: " << bossHome;
	cout << "\n Cool Down: " << coolDown;
	cout << "\n Damage: " << damage;
	cout << "\n==========================================================";
	cout << "\n";
}