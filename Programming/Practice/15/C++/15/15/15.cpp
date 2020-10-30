﻿#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	// Генерация случаных чисел в зависимости о текущего времени
	srand(time(NULL));
	int x;
	int i;
	int popitka = 1;
	// Цикл в цикле для того, чтобы можно было попытаться угадать чмсло снова
	while (int(popitka) == 1)
	{
		// "% 100" ограничивает случаный числа, они генерируются в диапазоне от 0 до 100 (включая крайние пределы)
		int a = rand() % 100;
		cout << "Загадано случайное целое число" << endl;
		cout << "Попробуйте его угадать: " << endl;
		i = 0;
		// 5 попыток
		while (i < 5)
		{
			cin >> x;
			if (x == a)
			{
				cout << "Поздравляю! Вы угадали" << endl;
				break;
			}
			if (x < a) cout << "Загаданное число больше" << endl;
			if (x > a) cout << "Загаданное число меньше" << endl;
			i++;
		}
		// Если после выполнения цикла i = 5, => пользователь не угадал число
		if (i == 5)cout << "Вы проиграли. Было загадано:" << a << endl;
		cout << "Хотите начать сначала? (1 - ДА )" << endl;
		cin >> popitka;
	}
}