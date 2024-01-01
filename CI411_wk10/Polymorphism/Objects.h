#pragma once
// ----------------------------------------------
// Function Declarations

// ----------------------------------------------

#include <iostream>

// Global Variables

void createCharacters();

// ----------------------------------------------

class Character
{
public:
	std::string name = "null";
	float health = 0, speed = 10;
	bool isAlive;

	void checkIsAlive() { if (health < 1) isAlive = false; }

	// Constructor
	Character();
};

class PlayerCharacter : public Character
{
public:
	std::string weapon = "Sword";
	float damage = 10;
	float coolDown = 1;
	int xp = 50;

	PlayerCharacter();
	PlayerCharacter(std::string nameSet, float healthSet, float speedSet, std::string weaponSet, float damageSet, float coolDownSet, int xpSet);
	
	void displayStats()
	{
		std::cout << "======================================" << std::endl;
		std::cout << "Health: " << health << std::endl;
		std::cout << "Speed: " << speed << std::endl;
		std::cout << "Weapon: " << weapon << std::endl;
		std::cout << "Damage: " << damage << std::endl;
		std::cout << "Cooldown: " << coolDown << std::endl;
		std::cout << "XP: " << xp << std::endl;
		std::cout << "======================================" << std::endl;
		std::cout << "\n";
	};
};

class NPC : public Character
{
public:
	bool isTarget = true;
	std::string leader = "boss1";
	// Methods
	NPC();
	NPC(std::string nameSet, std::string leaderSet, float healthSet, float speedSet);
	
	void displayStats()
	{
		std::cout << "======================================" << std::endl;
		std::cout << "Name: " << name << std::endl;
		std::cout << "Health: " << health << std::endl;
		std::cout << "Speed: " << speed << std::endl;
		std::cout << "Leader: " << leader << std::endl;
		std::cout << "======================================" << std::endl;
		std::cout << "\n";
	}
};

class Minion : public NPC
{
public:
	std::string resourceGathering = "Wood";
	int capacity = 10;
	float currentLoad = 0;
	// Methods
	Minion();
	Minion(std::string nameSet, std::string leaderSet, std::string resourceSet, int capacitySet, int currentLoadSet);

	void displayStats()
	{
		std::cout << "======================================" << std::endl;
		std::cout << "Name: " << name << std::endl;
		std::cout << "Leader: " << leader << std::endl;
		std::cout << "Resource: " << resourceGathering << std::endl;
		std::cout << "Capacity: " << capacity << std::endl;
		std::cout << "Current Load: " << currentLoad << std::endl;
		std::cout << "======================================" << std::endl;
		std::cout << "\n";
	}
};

class Warrior : public NPC
{
public:
	std::string weapon = "Axe";
	float coolDown = 1;
	float damage = 10;
	// Methods
	Warrior();
	Warrior(std::string nameSet, std::string leaderSet, std::string weaponSet, float healthSet, float damageSet, float coolDownSet);

	void displayStats()
	{
		std::cout << "======================================" << std::endl;
		std::cout << "Name: " << name << std::endl;
		std::cout << "Health: " << health << std::endl;
		std::cout << "Speed: " << speed << std::endl;
		std::cout << "Leader: " << leader << std::endl;
		std::cout << "Weapon: " << weapon << std::endl;
		std::cout << "Damage: " << damage << std::endl;
		std::cout << "Cooldown: " << coolDown << std::endl;
		std::cout << "======================================" << std::endl;
		std::cout << "\n";
	}
};

class Boss : public Warrior
{
public:
	int bossLevel = 10;
	std::string bossHome = "Dungeon";
	// Methods
	Boss();
	Boss(std::string nameSet, std::string weaponSet, float healthSet, float damageSet, float coolDownSet);

	void displayStats()
	{
		std::cout << "======================================" << std::endl;
		std::cout << "Name: " << name << std::endl;
		std::cout << "Health: " << health << std::endl;
		std::cout << "Speed: " << speed << std::endl;
		std::cout << "Weapon: " << weapon << std::endl;
		std::cout << "Damage: " << damage << std::endl;
		std::cout << "Cooldown: " << coolDown << std::endl;
		std::cout << "Boss Level: " << bossLevel << std::endl;
		std::cout << "Boss Home: " << bossHome << std::endl;
		std::cout << "======================================" << std::endl;
		std::cout << "\n";
	}
};