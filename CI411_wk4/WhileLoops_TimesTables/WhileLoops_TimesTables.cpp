// --------------------------------------------
// ---------- CI411 Week 4
// ---------- Sohan Thupakula, UoB 2023
// --------------------------------------------

#include <iostream>

int main()
{
	// Local variables
	bool gameOver = false;

	// While loop 
    while (gameOver == false)
    {
        // Prompt the user for a number

        std::cout << "Please enter a number: ";

        // Write times tables up to 12 for the number

        int number;
        std::cin >> number;

        for (int i = 1; i <= 12; i++)
        {
            std::cout << number << " x " << i << " = " << number * i << std::endl;
        }

        // Ask user if they want to play again

        std::cout << "Do you want to play again? (y/n): ";

        char playAgain;
        std::cin >> playAgain;

        if (playAgain == 'n')
        {
            // Display end message
            std::cout << "Thanks for playing." << std::endl;
            gameOver = true;
        }


    }



}