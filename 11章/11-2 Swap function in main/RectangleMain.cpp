#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;



int main()
{
	double w1, h1, w2, h2;
	cin >> w1 >> h1 >> w2 >> h2;
	Rectangle r1(w1, h1);
	Rectangle r2(w2, h2);
	
	cout << setprecision(2) << fixed << "SwapByReference:" << r1.getArea() << " " << r2.getArea() << " to ";

	r1.swapByReference(r2);

	cout << setprecision(2) << fixed << r1.getArea() << " " << r2.getArea() << "\n";

	cout << setprecision(2) << fixed << "SwapByPointer:" << r1.getArea() << " " << r2.getArea() << " to ";

	r1.swapByPointer(&r2);

	cout << setprecision(2) << fixed << r1.getArea() << " " << r2.getArea() << "\n";
	system("pause");
	return 0;
}