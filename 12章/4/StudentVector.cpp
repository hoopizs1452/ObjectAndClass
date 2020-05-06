#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void stuAve(vector<double> n)
{
	double sum = 0;
	double avg;

	for (int i = 0; i < 3; i++)
	{
		sum += n[i];
	}
	avg = sum / 3;
	cout << avg << " ";
}

double* courseAve(vector<vector<double>> n)
{
	double sum1 = 0, sum2 = 0, sum3 = 0;
	vector<double> d;
	static double e[3] = { 0, 0, 0 };
	for (int i = 0; i < 5; i++)
	{
		d = n[i];
		sum1 += d[0];
	}
	e[0] = sum1 / 5;
	for (int i = 0; i < n.size(); i++)
	{
		d = n[i];
		sum2 += d[1];
	}
	e[1] = sum2 / 5;
	for (int i = 0; i < n.size(); i++)
	{
		d = n[i];
		sum3 += d[2];
	}
	e[2] = sum3 / 5;
	return e;
}

int main()
{
	vector<vector<double>> pascal(5, vector<double>(3, 1));
	pascal[0][0] = 80.0;
	pascal[0][0] = 80.0;
	pascal[0][1] = 70.0;
	pascal[0][2] = 90.0;
	pascal[1][0] = 85.0;
	pascal[1][1] = 77.0;
	pascal[1][2] = 95.0;
	pascal[2][0] = 83.0;
	pascal[2][1] = 75.0;
	pascal[2][2] = 70.0;
	pascal[3][0] = 73.0;
	pascal[3][1] = 95.0;
	pascal[3][2] = 67.0;
	pascal[4][0] = 88.0;
	pascal[4][1] = 79.0;
	pascal[4][2] = 71.0;
	
	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			cout << fixed << setprecision(1) << pascal[i][j] << ",";
		}
		vector<double> a;
		a = pascal[i];
		stuAve(a);
		cout << endl;
	}
	double*p = courseAve(pascal);
	cout << "Average:" << *p << "," << *(p + 1) << "," << *(p + 2);

	system("pause");
	return 0;
}