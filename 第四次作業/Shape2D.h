#ifndef SHAPE2D_H
#define SHAPE2D_H
#include "Shape.h"
#include <string>
using namespace std;

class Shape2D :public Shape
{
public:
	virtual double getPerimeter() const = 0;
};

#endif // !SHAPE2D_H

