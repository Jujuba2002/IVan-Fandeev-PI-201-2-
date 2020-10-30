#include<iostream>

using namespace std;

int main()
{
	int number;
	setlocale(LC_ALL, "RUS");
	cout << "Введите число, от которого нужно нужно взять факториал: " << endl;
	cin >> number;
	int n = 1;
	if (number > 0)
	{
		for (int i = 1; i < number; i++)
		{
			n = n * (i + 1);
		}
		if ((n >= 1) && (n <= 1000000000))
		{
			cout << n;
		}
		else
		{
			cout << "Факториал не соответствует условию (1 <= n <= 1000000000)" << endl;
		}
	}
	else
	{
		cout << "Неправильный ввод" << endl;
	}
}