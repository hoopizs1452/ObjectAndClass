#include<iostream>
#include<iomanip>
using namespace std;

class Rectangle
{
public:
	double width, height;

	Rectangle()
	{
		width = 1;
		height = 1;
	}

	Rectangle(double newHeight, double newWidth)
	{
		height = newHeight;
		width = newWidth;
	}

	double getPerimeter()
	{
		return (width * 2) + (height * 2);
	}

	double getArea()
	{
		return width * height;
	}
};

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