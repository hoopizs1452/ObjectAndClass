#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{

	vector<vector<vector<int>>> d(5, vector<vector<int>>(4, vector<int>(4, 0)));
	int day = 0;
	char answer;

	d[0][0][0] = 1;
	d[0][0][1] = 3;
	d[0][0][2] = 5;
	d[0][0][3] = 7;
	d[0][1][0] = 9;
	d[0][1][1] = 11;
	d[0][1][2] = 13;
	d[0][1][3] = 15;
	d[0][2][0] = 17;
	d[0][2][1] = 19;
	d[0][2][2] = 21;
	d[0][2][3] = 23;
	d[0][3][0] = 25;
	d[0][3][1] = 27;
	d[0][3][2] = 29;
	d[0][3][3] = 31;


	d[1][0][0] = 2;
	d[1][0][1] = 3;
	d[1][0][2] = 6;
	d[1][0][3] = 7;
	d[1][1][0] = 10;
	d[1][1][1] = 11;
	d[1][1][2] = 14;
	d[1][1][3] = 15;
	d[1][2][0] = 18;
	d[1][2][1] = 19;
	d[1][2][2] = 22;
	d[1][2][3] = 23;
	d[1][3][0] = 26;
	d[1][3][1] = 27;
	d[1][3][2] = 30;
	d[1][3][3] = 31;


	d[2][0][0] = 4;
	d[2][0][1] = 5;
	d[2][0][2] = 6;
	d[2][0][3] = 7;
	d[2][1][0] = 12;
	d[2][1][1] = 13;
	d[2][1][2] = 14;
	d[2][1][3] = 15;
	d[2][2][0] = 20;
	d[2][2][1] = 21;
	d[2][2][2] = 22;
	d[2][2][3] = 23;
	d[2][3][0] = 28;
	d[2][3][1] = 29;
	d[2][3][2] = 30;
	d[2][3][3] = 31;


	d[3][0][0] = 8;
	d[3][0][1] = 9;
	d[3][0][2] = 10;
	d[3][0][3] = 11;
	d[3][1][0] = 12;
	d[3][1][1] = 13;
	d[3][1][2] = 14;
	d[3][1][3] = 15;
	d[3][2][0] = 24;
	d[3][2][1] = 25;
	d[3][2][2] = 26;
	d[3][2][3] = 27;
	d[3][3][0] = 28;
	d[3][3][1] = 29;
	d[3][3][2] = 30;
	d[3][3][3] = 31;


	d[4][0][0] = 16;
	d[4][0][1] = 17;
	d[4][0][2] = 18;
	d[4][0][3] = 19;
	d[4][1][0] = 20;
	d[4][1][1] = 21;
	d[4][1][2] = 22;
	d[4][1][3] = 23;
	d[4][2][0] = 24;
	d[4][2][1] = 25;
	d[4][2][2] = 26;
	d[4][2][3] = 27;
	d[4][3][0] = 28;
	d[4][3][1] = 29;
	d[4][3][2] = 30;
	d[4][3][3] = 31;

	for (int i = 0; i < 5; i++)
	{
		cout << "Is your birthday in Set" << (i + 1) << "?" << endl;
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 4; k++)
				cout << setw(3) << d[i][j][k] << " ";
			cout << endl;
		}
		cout << "\nEnter N for No and Y for Yes: ";
		cin >> answer;
		if (answer == 'Y')
			day += d[i][0][0];
	}

	cout << "Your birthday is " << day << endl;

	return 0;
}