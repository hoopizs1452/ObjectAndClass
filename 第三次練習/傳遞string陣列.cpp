#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void printStringArray(string word[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << word[i] << endl;
	}
}

int main()
{
	string text;
	getline(cin, text);
	stringstream ss(text);
	//cin >> text;

	string word[10] = {};
	
	for (int i = 0; !ss.eof(); i++)
	{
		ss >> word[i];
	}

	printStringArray(word, 10);
	cout << "Length:" << text.length() << endl;
	system("pause");
	return 0;
}