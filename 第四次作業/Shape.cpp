#include "Shape.h"
#include <string>
using namespace std;

Shape::Shape()
{
	
}

Shape::Shape(string color, bool filled)
{
	this->color = color;
	this->filled = filled;
}

void Shape::setColor(string color)
{
	this->color = color;
}

void Shape::setFilled(bool filled)
{
	this->filled = filled;
}

string Shape::getColor() const
{
	return color;
}

bool Shape::isFilled() const
{
	return filled;
}

