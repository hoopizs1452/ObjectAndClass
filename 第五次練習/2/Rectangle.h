//#pragma once
#ifndef Rectangle_H
#define Rectangle_H

class Rectangle
{
private:
	double width, height;
public:
	Rectangle(double = 0, double = 0);
	void setWidth(double);
	void setHeight(double);
	double getWidth();
	double getHeight();
	double getArea();
	void swapByReference(Rectangle &);
	void swapByPointer(Rectangle *);
};

#endif
