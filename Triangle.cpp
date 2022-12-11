#include "Triangle.h"
#include "iostream"

Triangle::Triangle(double side1_, double side2_, double side3_)
{
	side1 = side1_;
	side2 = side2_;
	side3 = side3_;
}

double Triangle::Perimeter()
{
	return side1 + side2 + side3;
}

double Triangle::Square()
{
	double halfPer = Perimeter() / 2;
	double res = sqrt(halfPer * (halfPer - side1) * (halfPer - side2) * (halfPer - side3));
	return res;
}
