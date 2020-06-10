#include "Shape.h"


Shape::Shape()
{
	color = "";
}

Shape::Shape(string c)
{
	this->color = c;
}

void Shape::setColor(string c)
{
	this->color = c;
}

string Shape::getColor()
{
	return color;
}