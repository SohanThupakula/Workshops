// ---------------------------------------------
// ---------- CI411 Week 4
// ---------- Sohan Thupkakula, UoB 23
// ---------------------------------------------

#include <iostream>

int main()
{
	// To create a program that uses loops to create a combat encounter that loops until a character is dead.

	// seed random number generator
	srand(static_cast<unsigned int>(time(0)));

	// Creating variables
	bool gameOver = false;
	float playerHealth = 100;
	float enemyHealth = 100;
	float playerAttack = 50;
	float enemyAttack = 50;
	float enemyAttackModifier;
	float playerAttackModifier;
	int playerChoice;

	// Creating while loop that runs until a character dies
	
	while (gameOver == false)
	{
		std::cout << "You have " << playerHealth << " health." << std::endl;
		std::cout << "The enemy has " << enemyHealth << " health." << std::endl;
		std::cout << "What would you like to do?" << std::endl;
		std::cout << "1. Attack" << std::endl;
		std::cout << "2. Defend" << std::endl;
		std::cout << "3. Block" << std::endl;
		std::cout << "\n\n Choice: ";
		std::cin >> playerChoice;

		if (playerChoice == 1)
		{
			// Player attacks
			playerAttackModifier = rand() % 50 + 1;
			enemyHealth = enemyHealth - playerAttack - playerAttackModifier;
			std::cout << "You attack the enemy for " << playerAttack + playerAttackModifier << " damage!" << std::endl;
		}
		else if (playerChoice == 2)
		{
			// Player defends
			playerAttackModifier = rand() % 50 + 1;
			playerHealth = playerHealth + playerAttackModifier;
			std::cout << "You heal yourself for " << playerAttackModifier << " health!" << std::endl;
		}
		else if (playerChoice == 3)
		{
			// Player blocks
			playerAttackModifier = rand() % 50 + 1;
			playerHealth = playerHealth + playerAttackModifier;
			std::cout << "You heal yourself for " << playerAttackModifier << " health!" << std::endl;
		}
		else
		{
			std::cout << "Invalid choice!" << std::endl;
		}

		enemyAttackModifier = rand() % 50 + 1;

		std::cout << "The enemy attacks you for " << enemyAttack + enemyAttackModifier << " damage!" << std::endl;
		playerHealth = playerHealth - enemyAttack - enemyAttackModifier;

		if (playerHealth <= 0)
		{
			std::cout << "You have died!" << std::endl;
			gameOver = true;
		}
		else if (enemyHealth <= 0)
		{
			std::cout << "You have defeated the enemy!" << std::endl;
			gameOver = true;
		}
		else
		{
			std::cout << "You have " << playerHealth << " health." << std::endl;
			std::cout << "The enemy has " << enemyHealth << " health." << std::endl;
		}

		if (playerHealth <= 0 || enemyHealth <= 9)
			gameOver = true;	

	}
}