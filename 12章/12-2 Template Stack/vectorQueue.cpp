#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	char num;
	vector<char> array;
	for (int i = 0; i < 9; i++)
	{
		cin >> num;
		array.push_back(num);
	}
	for (int i = 0; i < 4; i++)
	{
		int num1 = 0;
		num1 = array.back() - '0';
		array.pop_back();

		char n;
		n = array.back();
		array.pop_back();

		int num2 = 0;
		num2 = array.back() - '0';
		array.pop_back();

		switch (n)
		{
		case '+':
			array.push_back((num2 + num1) + '0');
			break;
		case '-':
			array.push_back((num2 - num1) + '0');
			break;
		case '*':
			array.push_back((num2 * num1) + '0');
			break;
		case '/':
			array.push_back((num2 / num1) + '0');
			break;
		}
		cout << array.back() - '0' << endl;
	}
}
