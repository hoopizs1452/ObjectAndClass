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

double Rectangle::getArea() const
{
    return width * height;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getHeight() const
{
    return height;
}

void Rectangle::setWidth(double newWi)
{
    width = (newWi >= 0) ? newWi : 0;
}

void Rectangle::setHeight(double newHe)
{
    height = (newHe >= 0) ? newHe : 0;
}

int Rectangle::geNumOfRect()
{
    return numOfRect;
}
