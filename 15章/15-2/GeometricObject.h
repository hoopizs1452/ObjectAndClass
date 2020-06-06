#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include <string>
using namespace std;

class GeometricObject
{
private:
	string color;
public:
	GeometricObject();
	GeometricObject(const string&);
	void setColor(const string&);
	string getColor() const;
	virtual string display() const = 0;
};

#endif // !GEOMETRICOBJECT_H
