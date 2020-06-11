#include "Rectangle.h"
#include <math.h>
#include <sstream>
#include <string>
using namespace std;

Rectangle::Rectangle()
{

}

Rectangle::Rectangle(double width, double height, string color, bool filled)
{
	setWidth(width);
	setHeight(height);
	setColor(color);
	setFilled(filled);
}

void Rectangle::setWidth(double width)
{
	this->width = width;
}

void Rectangle::setHeight(double height)
{
	this->height = height;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getHeight() const
{
	return height;
}

double Rectangle::getPerimeter() const
{
	return (width * 2) + (height * 2);
}

double Rectangle::getArea() const
{
	return width * height;
}

string Rectangle::toString() const
{
	stringstream ss;
	ss << "rectangle, " << width << ", " << height << ", " << getColor();
	return ss.str();
}