#include "Rectangle4.h"

int Rectangle::numOfRect = 0;

Rectangle::Rectangle()
{
    width = 1;
    height = 1;
    numOfRect++;
}

// Construct a circle object
Rectangle::Rectangle(double newWidth, double newHeight)
{
    width = newWidth;
    height = newHeight;
    numOfRect++;
}

// Return the area of this circle
double Rectangle::getArea() const
{
    return width * height;
}

// Return the radius of this circle
double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getHeight() const
{
    return height;
}

// Set a new radius
void Rectangle::setWidth(double newWi)
{
    width = (newWi >= 0) ? newWi : 0;
}

void Rectangle::setHeight(double newHe)
{
    height = (newHe >= 0) ? newHe : 0;
}

// Return the number of circle objects
int Rectangle::geNumOfRect()
{
    return numOfRect;
}