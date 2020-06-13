#include <iostream>
#include <string>
#include "Date.h"
#include "Student.h"
using namespace std;

int main()
{
	string name;
	int month, day, year, score;
	Date birth1(6, 1, 1999);
	Date birth2(10, 8, 1997);
	Student student1("John", birth1, 90);
	Student student2("Marry", birth2, 80);

	cin >> name >> month >> day >> year;

	Date birth3(month, day, year);
	student1.setName(name);
	student2.setDate(birth3);

	student1.print();
	student2.print();

	system("pause");
	return 0;
}
