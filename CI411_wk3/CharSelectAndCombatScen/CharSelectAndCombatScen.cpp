// ------------------------------------------------------
// ---------- CI 411 Week 3
// ---------- Sohan Thupakula, UoB 2023
// ------------------------------------------------------
// Create a simple C++ program using switch statements

#include <iostream>
using namespace std;

int main()
{
	cout << "============ GAME START ============" << endl;
	cout << "====================================" << endl;

	// Game variables
	string playerName; 
	string weapon;
	float damage;
	float coolDown;
	float attack;
	int playerSelection;

	// Character selection
	cout << "Please select your character: " << endl;
	cout << "1. Dwarf" << endl;
	cout << "2. Elf" << endl;
	cout << "3. Orc" << endl;
	cout << "4. Fighter" << endl;
	cout << "5. Wizard" << endl;

	cin >> playerSelection;

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
			cout << "Invalid selection" << endl;
			break;
	}

	cout << "\n\n================= The Encounter =================== \n\n\n" << endl;
	cout << playerName;
	cout << " embarks on a quest to slay the dragon, armed only with their trusty ";
	cout << weapon; 
	cout << ". On their way to seek help with the gargantuan task, they encounter the dreaded fat child from Charlie and the Chocolate Factory, who engages with mortal combat!" << endl;

	attack = damage * 5 * 1 / coolDown;
	cout << "\n\n " << playerName << " attacks with " << weapon;
	cout << "\n Your attack power totals to " << attack;

	// Check if player is dead or alive

	if (attack > 24)
	{
		cout << "\n\n The fat child is dead! You win!" << endl;
	}
	else
	{
		cout << "\n\n The fat child is still alive! You lose!" << endl;
	}

	// Exist message
	cout << "\n \n \n =================== GAME OVER =================== \n \n \n";
	
		return 0;
}