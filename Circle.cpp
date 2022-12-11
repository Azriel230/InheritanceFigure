#include "Circle.h"
#include "iostream"

Circle::Circle(double radius_)
{
	radius = radius_;
}

double Circle::Perimeter()
{
	return 2 * 3.14 * radius;
}

double Circle::Square()
{
	return 3.14 * radius * radius;
}