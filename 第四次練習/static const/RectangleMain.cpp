#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	int count = 0;
	int width[3];
	int height[3];

	for (int i = 0; i < 3; i++)
	{
		cin >> width[i] >> height[i];
		Rectangle rectangle(width[i], height[i]);

		cout << rectangle.getWidth() << " " << rectangle.getHeight() << " " << rectangle.getArea() << endl;
		count = Rectangle::getNumOfRect();
	}
	cout << count << " " << "Rectangles" << endl;

	system("pause");
	return 0;
}
