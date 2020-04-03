#include <iostream>
#include "Rectangle4.h"
using namespace std;

int main()
{
    double width, height;
    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> width >> height;
        Rectangle r(width, height);

        cout << r.getWidth() << " " << r.getHeight() << " " << r.getArea() << endl;
        count = Rectangle::geNumOfRect();
    }
    cout << count << " " << "Rectangles" << endl;
    
    system("pause");
    return 0;
}