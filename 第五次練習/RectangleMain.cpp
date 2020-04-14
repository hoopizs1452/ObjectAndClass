#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

void swapByReference(Rectangle &r1, Rectangle &r2)
{
	Rectangle temp = r1;
	r1 = r2;
	r2 = temp;
}

void swapByPointer(Rectangle *r1, Rectangle *r2)
{
	Rectangle temp = *r1;
	*r1 = *r2;
	*r2 = temp;
}

int main()
{
	double w1, h1, w2, h2;
	cin >> w1 >> h1 >> w2 >> h2;
	Rectangle r1(w1, h1);
	Rectangle r2(w2, h2);
	
	cout << setprecision(2) << fixed << "SwapByReference:" << r1.getArea() << " " << r2.getArea() << " to ";

	swapByReference(r1, r2);

	cout << setprecision(2) << fixed << r1.getArea() << " " << r2.getArea() << "\n";

	cout << setprecision(2) << fixed << "SwapByPointer:" << r1.getArea() << " " << r2.getArea() << " to ";

	swapByPointer(&r1, &r2);

	cout << setprecision(2) << fixed << r1.getArea() << " " << r2.getArea() << "\n";
	system("pause");
	return 0;
}