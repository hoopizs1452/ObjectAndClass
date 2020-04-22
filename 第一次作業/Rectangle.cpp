#include "Rectangle.h"

int Rectangle::numOfRect = 0;
Rectangle::Rectangle(double w, double h)
{
	width = w;
	height = h;
	numOfRect++;
}

void Rectangle::setWidth(double newW)
{
	width = newW;
}

void Rectangle::setHeight(double newH)
{
	height = newH;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getHeight() const
{
	return height;
}

double Rectangle::getArea() const
{
	return width * height;
}

double Rectangle::getPerimeter() const
{
	return (width * 2) + (height * 2);
}

int Rectangle::getNumOfRect()
{
	return numOfRect;
}