#include <iostream>
#include <iomanip>
#include <string>
#include "GeometricObject.h"
#include "Ball.h"
#include "Cube.h"
using namespace std;

int main()
{
	
	int radius, length;
	string bColor, cColor;
	cin >> radius >> bColor >> length >> cColor;
	Ball b(radius, bColor);
	Cube r(length, cColor);

	cout << setprecision(1) << fixed << "Ball" << "\n\n" << "radius:" << b.getRadius()
		<< b.display(b);
	cout << setprecision(1) << fixed << "Cube" << "\n\n" << "length:" << r.getLength()
		<< r.display(r);
	
	return 0;
}