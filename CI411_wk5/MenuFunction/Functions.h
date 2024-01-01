#pragma once
#include <string>

// Function Declarations
void startScreen();
void endScreen();
void mainMenuLoop();

// Game Functions
void numberGuesserGame(int randomNumber, int playerGuess, int numberOfGuesses);
void combatScenario(int playerHealth, int enemyHealth, int playerDamage, int enemyDamage, int playerChoice);
void rpgScenarioGenerator(std::string playerName, std::string weapon, float damage, float coolDown, float attack, int playerSelection);
void missileSpeedCalculator(float missileSpeed, float missileAcceleration, float missileDistance, float missileTime);
void coordinateDistanceCalculator(float x1, float x2, float y1, float y2, float distance);