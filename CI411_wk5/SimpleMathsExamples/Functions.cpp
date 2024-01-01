// --------------------------------
// ---------- CI411 Week 5 - Functions Source

#include"Functions.h"
#include <iostream>
using namespace std;


// Function definitions
float circleArea(float radius)
{
	float area = 3.14159 * radius * radius;
	return area;
}

float circumferenceCircle(float radius)
{
	float circumference = 2 * 3.14159 * radius;
	return circumference;
}

float hypotenuseTriangle(float side1, float side2)
{
	float hypotenuse = sqrt(side1 * side1 + side2 * side2);
	return hypotenuse;
}