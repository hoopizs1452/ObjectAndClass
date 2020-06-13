#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
	char a;
	Stack<char> array[9];
	for (int i = 0; i < 9; i++)
	{
		cin >> a;
		array->push(a);
	}
	for (int j = 0; j < 4; j++)
	{
		int num2 = 0;
		num2 = array->peek() - '0';
		array->pop();
		char n;
		n = array->peek();
		array->pop();
		int num = 0;
		num = array->peek() - '0';
		array->pop();
		
		switch (n)
		{
		case '+':
			array->push((num + num2) + '0');
			break;
		case '-':
			array->push((num - num2) + '0');
			break;
		case '*':
			array->push((num * num2) + '0');
			break;
		case '/':
			array->push((num / num2) + '0');
			break;
		}
		cout << array->peek() - '0' << endl;
	}
    return 0;
}