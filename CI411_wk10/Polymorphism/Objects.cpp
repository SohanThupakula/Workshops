// -----------------------------------------------
// Function Definitions

// Libraries to include

#include "Objects.h"
#include <iostream>

using namespace std;

// ----------------------------------------------

void createCharacters()
{
    PlayerCharacter player1 = PlayerCharacter("Player1", 100, 10, "Sword", 10, 1, 50);

    NPC npc1 = NPC("NPC1", "Boss", 100, 10);

    Minion minion1 = Minion("Minion1", "Boss", "Gold", 10, 50);

    Warrior warrior1 = Warrior("Warrior1", "Boss", "Axe", 150, 50, 3);

    Boss boss1 = Boss("Boss", "Staff", 500, 35, 5);

    
}

// To display the stats for all the character

