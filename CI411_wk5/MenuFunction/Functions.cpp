// --------- Functions Source

#include <iostream>
#include "Functions.h"
#include <string>

// Global Variables
int score = 0;
bool gameOver = false;

// =========================================================================

void startScreen()
{
	std::cout << "===============================" << std::endl;
	std::cout << "===== MAIN MENU ===== " << std::endl;
	std::cout << "==================================" << std::endl;
	std::cout << "===== Welcome ===== " << std::endl;
	std::cout << " " << std::endl;
}

// =========================================================================

void endScreen()
{
	std::cout << "\n\n\n" << std::endl;
	std::cout << "================================== \n" << std::endl;
	std::cout << "===== Thank you for playing ===== \n" << std::endl;
	std::cout << "================================== \n" << std::endl;
}

// =========================================================================

void numberGuesserGame()
{
	int randomNumber = rand() % 100 + 1;
	int playerGuess;
	int numberOfGuesses = 0;

	std::cout << "\n\n\n ========== Number Guesser Game ========== \n\n" << std::endl;
	std::cout << "Guess a number between 1 and 100." << std::endl;
	std::cout << "Please enter your first guess: ";
	std::cin >> playerGuess;

	while (playerGuess != randomNumber)
	{
		if (playerGuess > randomNumber)
		{
			std::cout << "Too high. Try again." << std::endl;
			std::cout << "Enter your next guess: ";
			std::cin >> playerGuess;
			numberOfGuesses++;
		}
		else if (playerGuess < randomNumber)
		{
			std::cout << "Too low. Try again." << std::endl;
			std::cout << "Enter your next guess: ";
			std::cin >> playerGuess;
			numberOfGuesses++;
		}
	}

	std::cout << "You guessed correctly!" << std::endl;
	std::cout << "It took you " << numberOfGuesses << " guesses." << std::endl;
	score += 10;
}

// =========================================================================

void combatScenario()
{
	int playerHealth = 100;
	int enemyHealth = 100;
	int playerDamage;
	int enemyDamage;
	int playerChoice;

	std::cout << "\n\n\n ========== Combat Scenario ========== \n\n" << std::endl;
	std::cout << "You are in a combat scenario. You have 100 health." << std::endl;
	std::cout << "You are fighting an enemy with 100 health." << std::endl;
	std::cout << "You can either attack or defend." << std::endl;
	std::cout << "1. Attack" << std::endl;
	std::cout << "2. Defend" << std::endl;
	std::cout << "Please enter your choice: ";
	std::cin >> playerChoice;

	switch (playerChoice)
	{
	case 1:
		playerDamage = rand() % 10 + 1;
		enemyDamage = rand() % 10 + 1;
		enemyHealth -= playerDamage;
		playerHealth -= enemyDamage;
		std::cout << "You attacked the enemy for " << playerDamage << " damage." << std::endl;
		std::cout << "The enemy attacked you for " << enemyDamage << " damage." << std::endl;
		std::cout << "You have " << playerHealth << " health remaining." << std::endl;
		std::cout << "The enemy has " << enemyHealth << " health remaining." << std::endl;
		break;

	case 2:
		playerDamage = rand() % 10 + 1;
		enemyDamage = rand() % 10 + 1;
		playerHealth -= enemyDamage / 2;
		std::cout << "You defended the enemy's attack." << std::endl;
		std::cout << "You have " << playerHealth << " health remaining." << std::endl;
		std::cout << "The enemy has " << enemyHealth << " health remaining." << std::endl;
		break;

	default:
		std::cout << "Invalid input. Please try again." << std::endl;
		break;
	}

	if (playerHealth <= 0)
	{
		std::cout << "You have died." << std::endl;
		gameOver = true;
	}
	else if (enemyHealth <= 0)
	{
		std::cout << "You have defeated the enemy. Congratulations." << std::endl;
	}
}

// =========================================================================

void rpgScenarioGenerator()
{
	std::cout << "============ GAME START ============" << std::endl;
	std::cout << "====================================" << std::endl;

	// Game variables
	std::string playerName;
	std::string weapon;
	float damage{};
	float coolDown{};
	float attack;
	int playerSelection;

	// Character selection
	std::cout << "Please select your character: " << std::endl;
	std::cout << "1. Dwarf" << std::endl;
	std::cout << "2. Elf" << std::endl;
	std::cout << "3. Orc" << std::endl;
	std::cout << "4. Fighter" << std::endl;
	std::cout << "5. Wizard" << std::endl;

	std::cout << "Please enter your choice: ";

	std::cin >> playerSelection;

	// Switch statement to set values for each character selected

	switch (playerSelection)
	{
	case 1:
		playerName = "Dwarf";
		weapon = "Axe";
		damage = 10.0f;
		coolDown = 1.0f;
		attack = 1.0f;
		break;
	case 2:
		playerName = "Elf";
		weapon = "Bow";
		damage = 5.0f;
		coolDown = 0.5f;
		attack = 1.0f;
		break;
	case 3:
		playerName = "Orc";
		weapon = "Club";
		damage = 15.0f;
		coolDown = 2.0f;
		attack = 1.0f;
		break;
	case 4:
		playerName = "Fighter";
		weapon = "Sword";
		damage = 8.0f;
		coolDown = 1.0f;
		attack = 1.0f;
		break;
	case 5:
		playerName = "Wizard";
		weapon = "Staff";
		damage = 20.0f;
		coolDown = 3.0f;
		attack = 1.0f;
		break;
	default:
		std::cout << "Invalid selection" << std::endl;
		break;
	}

	std::cout << "\n\n================= The Encounter =================== \n\n\n" << std::endl;
	std::cout << playerName;
	std::cout << " embarks on a quest to slay the dragon, armed only with their trusty ";
	std::cout << weapon;
	std::cout << ". On their way to seek help with the gargantuan task, they encounter the dreaded fat child from Charlie and the Chocolate Factory, who engages with mortal combat!" << std::endl;

	attack = damage * 5 * 1 / coolDown;
	std::cout << "\n\n " << playerName << " attacks with " << weapon;
	std::cout << "\n Your attack power totals to " << attack;

	// Check if player is dead or alive

	if (attack > 24)
	{
		std::cout << "\n\n The fat child is dead! You win!" << std::endl;
	}
	else
	{
		std::cout << "\n\n The fat child is still alive! You lose!" << std::endl;
	}
}

// =========================================================================

void missileSpeedCalculator()
{
	float missileSpeed;
	float missileAcceleration;
	float missileDistance;
	float missileTime;

	std::cout << "\n\n\n ========== Missile Speed Calculator ========== \n\n" << std::endl;
	std::cout << "Please enter the distance the missile has to travel (in metres):" << std::endl;
	std::cin >> missileDistance;
	std::cout << "Please enter the acceleration of the missile (in metres per second squared):" << std::endl;
	std::cin >> missileAcceleration;

	missileSpeed = sqrt(2 * missileAcceleration * missileDistance);
	missileTime = missileSpeed / missileAcceleration;

	std::cout << "The missile will take " << missileTime << " seconds to reach its target." << std::endl;
	std::cout << "The missile will be travelling at " << missileSpeed << " metres per second when it reaches its target." << std::endl;
}

// =========================================================================

void coordinateDistanceCalculator()
{
	float x1;
	float x2;
	float y1;
	float y2;
	float distance;

	std::cout << "\n\n\n ========== Coordinate Distance Calculator ========== \n\n" << std::endl;
	std::cout << "Please enter the x coordinate of the first point:" << std::endl;
	std::cin >> x1;
	std::cout << "Please enter the y coordinate of the first point:" << std::endl;
	std::cin >> y1;
	std::cout << "Please enter the x coordinate of the second point:" << std::endl;
	std::cin >> x2;
	std::cout << "Please enter the y coordinate of the second point:" << std::endl;
	std::cin >> y2;

	distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

	std::cout << "The distance between the two points is " << distance << " units." << std::endl;
}

// =========================================================================

void mainMenuLoop()
{
	while (gameOver == false)
	{
		int playerChoice;

		std::cout << "Score: = " << score << std::endl;
		std::cout << "Please select the option you want to run." << std::endl;
		std::cout << "1. Number Guesser Game" << std::endl;
		std::cout << "2. Combat Scenario" << std::endl;
		std::cout << "3. RPG Scenario Generator " << std::endl;
		std::cout << "4. Missile Speed Calculator" << std::endl;
		std::cout << "5. Coordinate Distance Calculator" << std::endl;
		std::cout << "6. Exit" << std::endl;
		std::cout << " " << std::endl;
		std::cout << "Please enter your choice: ";
		std::cin >> playerChoice;

		switch (playerChoice)
		{
		case 1:
			numberGuesserGame();
			break;

		case 2:
			combatScenario();
			break;

		case 3:
			rpgScenarioGenerator();
			break;

		case 4:
			missileSpeedCalculator();
			break;

		case 5:
			coordinateDistanceCalculator();
			break;

		case 6:
			gameOver = true;
			break;

		default:
			std::cout << "Invalid input. Please try again." << std::endl;
			break;
		}
	}
}