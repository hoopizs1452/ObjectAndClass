#include "Rectangle.h"

Rectangle::Rectangle()
{
	height = 1;
	width = 1;
}

Rectangle::Rectangle(double newHeight, double newWidth)
{
	height = newHeight;
	width = newWidth;
}

void Rectangle::setHeight(double newHe)
{
	height = newHe;
}

void Rectangle::setWidth(double newWi)
{
	width = newWi;
}

double Rectangle::getHeight()
{
	return height;
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::getArea()
{
	return height * width;
}
