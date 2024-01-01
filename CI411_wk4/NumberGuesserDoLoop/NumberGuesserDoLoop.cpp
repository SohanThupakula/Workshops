// --------------------------------------------
// ---------- CI411 Week 4
// ---------- Sohan Thupakula, UoB 23
// --------------------------------------------

#include <iostream>

int main()
{
    // To create a number guesser game using a Do Loop

    // seed the random number generator

    srand(static_cast<unsigned int>(time(0)));

    // Random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int guesses = 0;
    int guess;

    std::cout << "\tWelcome to Number Guesser\n\n";
    

    do
    {
		std::cout << "Enter a guess: ";
		std::cin >> guess;
		++guesses;

        if (guess > randomNumber)
        {
			std::cout << "Your guess is too high.\n\n";
		}
        else if (guess < randomNumber)
        {
			std::cout << "Your guess is too low\n\n";
		}
        else
        {
			std::cout << "\nCorrect! You got it in " << guesses << " guesses!\n";
		}
	} while (guess != randomNumber);

}