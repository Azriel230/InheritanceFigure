#include "Figure.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include <iostream>

int main()
{
	Rectangle a(2, 6);
	std::cout << "Perimeter Rectangle: " << a.Perimeter() << " Square Rectangle: " << a.Square() << std::endl;

	Triangle b(3, 4, 5);
	std::cout << "Perimeter Triangle: " << b.Perimeter() << " Square Triangle: " << b.Square() << std::endl;

	Circle c(10);
	std::cout << "Perimeter Circle: " << c.Perimeter() << " Square Circle: " << c.Square() << std::endl;
	return 0;
}