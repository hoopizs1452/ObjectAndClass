#include <iostream>
#include <string>
#include "Score2.h"
using namespace std;

int main()
{
	string name;
	int math;
	cin >> name >> math;
	Score score1("John", 90);
	Score score2("Mary", 80);

	score1.setName(name);
	score2.setMath(math);

	score1.print();
	score2.print();
	system("pause");
	return 0;
}