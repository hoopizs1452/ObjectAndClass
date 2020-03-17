#include <iostream>
#include <string>
#include <iomanip>
#include "BMI.h"
using namespace std;

int main()
{
	string name;
	double weight, height;
	cin >> name >> weight >> height;
	Bmi ans(weight, height);

	cout << name << setprecision(2) << fixed << " " << ans.getBmi() << endl;
	system("pause");
	return 0;
}