// -----------------------------------------------------
// ---------- CI411 Week 3
// ---------- Sohan Thupakula, UoB 2023 
// -----------------------------------------------------

#include <iostream>

int main()
{
	int score = 0;
	std::cout << "Enter your score: ";
	std::cin >> score;

	if (score >= 1000)
	{
		std::cout << "You got an amazing score!" << std::endl;
	}
	else if (score >= 500)
	{
		std::cout << "You got a decent score!" << std::endl;
	}
	else
	{
		std::cout << "You got a terrible score!" << std::endl;
	}

	return 0;
}