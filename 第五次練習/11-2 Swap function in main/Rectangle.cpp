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

void Rectangle::swapByReference(Rectangle &r2)
{
	Rectangle temp = (*this);
	(*this) = r2;
	r2 = temp;
	
}

void Rectangle::swapByPointer(Rectangle *r2)
{
	Rectangle temp = (*this);
	(*this) = *r2;
	*r2 = temp;
}