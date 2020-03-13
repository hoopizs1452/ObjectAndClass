//#pragma once
#ifndef Rectangle_H
#define Rectangle_H

class Rectangle
{
public:
	double height, width;
	Rectangle();
	Rectangle(double, double);
	double getArea();
	double getPerimeter();
};
#endif
