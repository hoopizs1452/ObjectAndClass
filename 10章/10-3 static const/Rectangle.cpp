#include "Rectangle.h"

int Rectangle::numOfRect = 0;

Rectangle::Rectangle()
{
	width = 1;
	height = 1;
	numOfRect++;
}

Rectangle::Rectangle(double newWidth, double newHeight)
{
	width = newWidth;
	height = newHeight;
	numOfRect++;
}

void Rectangle::setWidth(double newWi)
{
	width = newWi;
}

void Rectangle::setHeight(double newHe)
{
	height = newHe;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getHeight() const
{
	return height;
}

int Rectangle::getNumOfRect()
{
	return numOfRect;
}

double Rectangle::getArea() const
{
	return width * height;
}
