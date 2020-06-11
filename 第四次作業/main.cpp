#include <iostream>
#include <iomanip>
#include <string>
#include "Shape.h"
#include "Shape2D.h"
#include "Shape3D.h"
#include "Ball.h"
#include "Circle.h"
#include "Cube.h"
#include "Rectangle.h"
using namespace std;

bool equalArea(const Shape& g1,const Shape& g2)
{
	return (g1.getArea() == g2.getArea()) ? g1.getArea() == g2.getArea() : g1.getArea() != g2.getArea();
}

bool equalPerimeter(const Shape2D& g1, const Shape2D& g2)
{
	return (g1.getPerimeter() == g2.getPerimeter()) ? g1.getPerimeter() == g2.getPerimeter() : g1.getPerimeter() != g2.getPerimeter();
}

bool equalVolume(const Shape3D& g1, const Shape3D& g2)
{
	return (g1.getVolume() == g2.getVolume()) ? g1.getVolume() == g2.getVolume() : g1.getVolume() != g2.getVolume();
}

void display(const Shape& g)
{
	cout << setprecision(2) << fixed;
	cout << g.toString() << ", " << g.getArea() << endl;
}

int main()
{
	Circle circle(5, "yellow", 1);
	Rectangle rectangle(3, 4, "red", 0);
	Ball ball(5, "blue", 1);
	Cube cube(4, "black", 0);

	display(circle);
	display(rectangle);
	display(ball);
	display(cube);
	if (equalPerimeter(circle, rectangle))
	{
		cout << setprecision(2) << fixed;
		cout << "circle " << circle.getPerimeter() << " != " << "rectangle " << rectangle.getPerimeter() << endl;
	}
	else
	{
		cout << setprecision(2) << fixed;
		cout << "circle " << circle.getPerimeter() << " == " << "rectangle " << rectangle.getPerimeter() << endl;
	}
	if (equalVolume(ball, cube))
	{
		cout << setprecision(2) << fixed;
		cout << "ball " << ball.getVolume() << " != " << "cube " << cube.getVolume() << endl;
	}
	else
	{
		cout << setprecision(2) << fixed;
		cout << "ball " << ball.getVolume() << " == " << "cube " << cube.getVolume() << endl;
	}
}