#ifndef SHAPE_H
#define SHAPE_H
#include <string>
using namespace std;

class Shape
{
private:
	string color;
	bool filled;
public:
	Shape();
	Shape(string color, bool filled);
	void setColor(string);
	void setFilled(bool);
	string getColor() const;
	bool isFilled() const;
	virtual string toString() const = 0;
	virtual double getArea() const = 0;
};

#endif // !SHAPE_H

