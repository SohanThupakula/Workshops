// ----------------------------------------
// ---------- CI411 Week 4
// ---------- Sohan Thupakula, Uob 23
// ----------------------------------------

#include <iostream>

int main()
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

    return 0;
}