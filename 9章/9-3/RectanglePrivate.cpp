#include "Rectangle(2).h"

Rectangle::Rectangle()
{
	width = 1;
	height = 1;
}

Rectangle::Rectangle(double newHeight, double newWidth)
{
	height = newHeight;
	width = newWidth;
}

void Rectangle::setRectangle(double newHeight, double newWidth)
{
	height = newHeight;
	width = newWidth;
}

double Rectangle::getRectangleHeight()
{
	return height;
}

double Rectangle::getRectangleWidth()
{
	return width;
}

double Rectangle::getArea()
{
	return height * width;
}

double Rectangle::getPerimeter()
{
	return (height * 2) + (width * 2);
}
