//#pragma once
#ifndef Rectangle_H
#define Rectangle_H

class Rectangle
{
private:
	double width, height;
	static int numOfRect;
public:
	Rectangle(double = 0, double = 0);
	void setWidth(double);
	void setHeight(double);
	double getWidth() const;
	double getHeight() const;
	double getArea() const;
	double getPerimeter() const;
	static int getNumOfRect();
};

#endif // !Rectangle_H
