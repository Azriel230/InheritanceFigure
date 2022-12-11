#pragma once

class Figure
{
public:

	/*
	* Calculates the perimeter of the Figure
	*/
	virtual double Perimeter() = 0;

	/*
	* Calculates the square of the Figure
	*/
	virtual double Square() = 0;
};
