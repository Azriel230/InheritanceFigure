#pragma once
#include "Figure.h"

class Rectangle : public Figure
{
	double length; //длина прямоугольника
	double width; //ширина прямоугольника
public:

	/*
	* Create a Rectangle-object
	* @param len- - lenght of Rectangle
	* @param wid_ - width of Rectangle
	*/
	Rectangle(double len_ = 0, double wid_ = 0);

	~Rectangle() {};

	/*
	* Calculates the perimeter of the Rectangle
	* @return Value of Perimeter Rectangle
	*/
	double Perimeter() override;

	/*
	* Calculates the square of the Rectangle
	* @return Value of Square Rectangle
	*/
	double Square() override;
};