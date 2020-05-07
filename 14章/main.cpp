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

	cout << "first=" << r1 + r2 * r3 << endl;
	cout << "second=" << (r4 - r5) / (r2) << endl;
	cout << "++first=" << ++(r1 + r2 * r3) << endl;
	cout << "--second=" << --((r4 - r5) / (r2)) << endl;
	if (++(r1 + r2 * r3) > --((r4 - r5) / (r2)))
	{
		cout << ++(r1 + r2 * r3) << ">" << --((r4 - r5) / (r2)) << endl;
	}
	else
		cout << ++(r1 + r2 * r3) << "<" << --((r4 - r5) / (r2)) << endl;
	
	system("pause");
	return 0;
}