#include "Complex.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	Complex cp1(3, 4);
	Complex cp2(2, -4);
	Complex cp3(3, -1);
	Complex cp4(4, 3);
	Complex cp5(5, 6);

	Complex first = cp1 + (cp2 * cp3);
	Complex second = cp4 - cp5;

	cout << "first=" << first.toString() << endl;
	cout << "second=" << second.toString() << endl;
	first = ++first;
	second = --second;
	cout << "++first=" << first.toString() << endl;
	cout << "--second=" << second.toString() << endl;

	system("pause");
	return 0;
}