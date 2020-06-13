//#pragma once
#ifndef Rectangle_H
#define Rectangle_H

class Rectangle
{
public:
	Rectangle();
	Rectangle(double, double);
	double getRectangleHeight();
	double getRectangleWidth();
	void setRectangle(double, double);
	double getArea();
	double getPerimeter();
private:
	double height, width;
};
#endif
