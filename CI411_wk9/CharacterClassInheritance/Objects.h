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
	float health = 0, speed = 10;
	std::string name = "null";
	bool isAlive;

	void checkIsAlive() { if (health < 1) isAlive = false; }
	void displayStats();

	// Constructor
	Character();
	Character(std::string nameSet, float healthSet);
};

class NPC : public Character
{
public:
	bool isTarget = true;
	std::string leader = "boss1";
	// Methods
	NPC();
};

class Minion : public NPC
{
public:
	std::string resourceGathering = "wood";
	int capacity = 10;
	float currentLoad = 0;
	// Methods
	Minion();
	Minion(std::string nameSet, std::string leaderSet, std::string resourceSet, int capacitySet);
};

class Warrior : public NPC
{
public:
	std::string weapon = "sword";
	float coolDown = 1;
	float damage = 10;
	// Methods
	Warrior();
	Warrior(std::string nameSet, std::string leaderSet, std::string weaponSet, float healthSet, float damageSet, float coolDownSet);
};

class Boss : public Warrior
{
public:
	int bossLevel = 10;
	std::string bossHome = "Dungeon";
	// Methods
	Boss();
	Boss(std::string nameSet, std::string weaponSet, float healthSet, float damageSet, float coolDownSet);
};