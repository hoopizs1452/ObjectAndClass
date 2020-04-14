#include "Rectangle.h"

Rectangle::Rectangle(double w, double h)
{
	width = w;
	height = h;
}

void Rectangle::setWidth(double newWidth)
{
	width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
	height = newHeight;
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::getHeight()
{
	return height;
}

double Rectangle::getArea()
{
	return width * height;
}
