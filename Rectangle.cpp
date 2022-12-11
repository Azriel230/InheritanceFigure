#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double len_, double wid_)
{
	length = len_;
	width = wid_;
}

double Rectangle::Perimeter()
{
	return 2 * (length + width);
}

double Rectangle::Square()
{
	return length * width;
}