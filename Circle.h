#pragma once
#include "Figure.h"

class Circle : public Figure
{
	double radius; //радиус круга
public:

	/*
	* Create a Circle-object
	* @param radius_ - radius of Circle
	*/
	Circle(double radius_ = 0);

	~Circle() {};

	/*
	* Calculates the perimeter of the Circle
	* @return Value of Perimeter Circle
	*/
	double Perimeter() override;

	/*
	* Calculates the square of the Circle
	* @return Value of Square Circle
	*/
	double Square() override;
};