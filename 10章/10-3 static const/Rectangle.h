#ifndef Rectangle_H
#define Rectangle_H

class Rectangle
{
public:
	Rectangle();
	Rectangle(double, double);
	void setWidth(double);
	void setHeight(double);
	double getWidth() const;
	double getHeight() const;
	double getArea() const;
	
	static int getNumOfRect();

private:
	double width, height;
	static int numOfRect;
};

#endif
