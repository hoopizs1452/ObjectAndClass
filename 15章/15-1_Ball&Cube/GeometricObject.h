#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include <string>
using namespace std;

class GeometricObject
{
public:
	GeometricObject();
	GeometricObject(const string& color);
	string getColor() const;
	void setColor(const string& color);
	string toString() const;

private:
	string color;
};

#endif 