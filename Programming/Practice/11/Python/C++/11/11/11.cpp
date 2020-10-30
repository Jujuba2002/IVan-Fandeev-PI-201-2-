#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	double a, c;
	int b;
	cout << "Введите число и степень, в которую его возвести: " << endl;
	cin >> a >> b;
	if (a != 0)
	{
		// Положительная степень:
		if (b > 0)
		{
			c = a;
			for (int i = 1; i < b; i++)
			{
				c *= a;
			}
		}
		// Нулевая степень:
		if (b == 0)
		{
			c = 1;
		}
		// Отрицательная степень:
		if (b < 0)
		{
			c = 1;
			for (int i = 0; i < abs(b); i++)
			{
				c /= a;
			}
		}
	}
	// 0 в любой степени будет 0:
	else c = 0;
	cout << c << endl;
}