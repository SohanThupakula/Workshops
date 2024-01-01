// ===================================
// Function Declarations 

// Libaries to include

#include <iostream>
#include "array.h"
using namespace std;

void displayDaysOfWeek()
{
		string daysOfWeek[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

		for (int i = 0; i < 7; i++)
		{
		cout << "Day " << i + 1 << ": " << daysOfWeek[i] << endl;
	    }
}