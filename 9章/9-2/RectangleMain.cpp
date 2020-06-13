#include<iostream>
#include<iomanip>
#include"Rectangle(2).h"
using namespace std;

int main()
{
	double h1, w1, h2, w2;
	cin >> h1 >> w1 >> h2 >> w2;

	Rectangle r1(h1, w1);
	Rectangle r2(h2, w2);

	cout << setprecision(2) << fixed << r1.getArea() << " " << r1.getPerimeter() << endl;
	cout << setprecision(2) << fixed << r2.getArea() << " " << r2.getPerimeter() << endl;

	r2.height = 5.0;
	r2.width = 2.5;

	cout << setprecision(2) << fixed << r2.getArea() << " " << r2.getPerimeter() << endl;

	system("pause");
	return 0;
}