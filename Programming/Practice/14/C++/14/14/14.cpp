#include<iostream>

using namespace std;

int main()
{
	int i;
	double n;
	setlocale(LC_ALL, "Rus");
	cout << "Введите целое число: " << endl;
	cin >> n;
	int dvoika = 2;
	if (n > 0)
	{
		// Цикл сравнивает каждую степень двойки c заданным числом nи выполняется до тех пор,
		// пока не вычислит все степени двойки в этом числе
		// Цикл начинается с 1, а не 0, потому что нужно еще учитывать нулевую степень двойки
		for (i = 1; ; i++)
		{
			if (dvoika <= n) dvoika *= 2;
			else break;
		}
		cout << i << endl;
	}
	if (n == 0)
	{
		cout << "0" << endl;
	}
}