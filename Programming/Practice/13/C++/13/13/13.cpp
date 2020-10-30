#include<iostream>

using namespace std;

int main()
{
	int a;
	setlocale(LC_ALL, "Rus");
	cout << "Введите число на проверку: " << endl;
	cin >> a;
	int i = 0;
	int delitel = 2;
	// Цикл проверяет делится ли заданное число на цифры от 2 до 8:
	while (i < 8)
	{
		if (int(a) % delitel != 0)
		{
			delitel += 1;
			i += 1;
			continue;
		}
		else break;
	}
	// Если цикл выполнился полностью => i = 8 => заданное число не делится на цифры от 2 до 8
	// Числа от 1 до 9 тоже являются простыми 
	if (i == 8 or ((int(a) > 0) and int(a) < 10)) cout << "Простое" << endl;
	// Если i != 8 => цикл не выполнился до конца и число сложное,
	// потому что делится как мниимум на одну цифру от 2 до 8
	else cout << "Сложное" << endl;
}