#include <iostream>
#include "Rational.h"
using namespace std;

int main()
{
	Rational r1(2, 3);
	Rational r2(5, 7);
	Rational r3(3, 5);
	Rational r4(7, 2);
	Rational r5(5, 6);

	Rational first;
	Rational second;

	first = r2.multiply(r3).add(r1);
	second = r4.subtract(r5).divide(r2);

	cout << "first=" << first.toString() << "\n";
	cout << "second=" << second.toString() << "\n";

	Rational g1(first.getDenominator(), first.getDenominator());
	Rational g2(second.getDenominator(), second.getDenominator());

	Rational f1 = first.add(g1);
	Rational f2 = second.subtract(g2);

	cout << "++first=" << f1.toString() << "\n";
	cout << "--second=" << f2.toString() << "\n";

	if (f1.doubleValue() < f2.doubleValue())
	{
		cout << f1.toString() << "<" << f2.toString() << endl;
	}
	else
		cout << f1.toString() << ">" << f2.toString() << endl;
	
	system("pause");
	return 0;
}