//#pragma once
#ifndef Rectangle_H
#define Rectangle_H

class Rectangle
{
private:
	double height, width;
public:
	Rectangle();
	Rectangle(double, double);
	void setHeight(double);
	void setWidth(double);
	double getHeight();
	double getWidth();
	double getArea();
};

#endif
