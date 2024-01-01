// -------------------------------------------------
// ---------- CI411 Week 5
// ---------- Sohan Thupakula, UoB 2023
//

#include <iostream>
#include"Functions.h"
using namespace std;

int main()
{
	float radius = 0.0f;
	float area = 0.0f;
	float circumference = 0.0f;
	float side1 = 0.0f;
	float side2 = 0.0f;
	float hypotenuse = 0.0f;

	cout << "Enter the radius of the circle: ";
	cin >> radius;
	area = circleArea(radius);
	circumference = circumferenceCircle(radius);
	cout << "The area of the circle is: " << area << endl;
	cout << "The circumference of the circle is: " << circumference << endl;

	cout << "Enter the length of side 1 of the triangle: ";
	cin >> side1;
	cout << "Enter the length of side 2 of the triangle: ";
	cin >> side2;
	hypotenuse = hypotenuseTriangle(side1, side2);
	cout << "The hypotenuse of the triangle is: " << hypotenuse << endl;

	return 0;
}