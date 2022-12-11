#pragma once
#include "Figure.h"

class Triangle : public Figure
{
	double side1; //сторона1 треугольника
	double side2; //сторона2 треугольника
	double side3; //сторона3 треугольника
public:

	/*
	* Create a Triangle-object
	* @param side1_ - first side of Triangle
	* @param side2_ - second side of Triangle
	* @param side3_ - third side of Triangle
	*/
	Triangle(double side1_ = 0, double side2_ = 0, double side3_ = 0);

	~Triangle() {};

	/*
	* Calculates the perimeter of the Triangle
	* @return Value of Perimeter Triangle
	*/
	double Perimeter() override;
	
	/*
	* Calculates the square of the Triangle
	* @return Value of Square Triangle
	*/
	double Square() override;
};