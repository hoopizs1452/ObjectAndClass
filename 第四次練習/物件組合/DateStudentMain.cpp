#include <iostream>
#include <string>
#include "Date.h"
#include "Student.h"
using namespace std;

int main()
{
	string name;
	int year, month, day;
	Date birth1;
	birth1.setDate(6, 1, 1999);
	Date birth2;
	birth2.setDate(10, 8, 1997);
	Student student1("John", birth1, 90);
	Student student2("Marry", birth2, 80);
	cin >> name >> month >> day >> year;
	
	student1.setName(name);
	birth2.setDate(month, day, year);
	student2.setDate(birth2);

	student1.print();
	student2.print();

	system("pause");
	return 0;
}