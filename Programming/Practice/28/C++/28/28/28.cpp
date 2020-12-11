#include <iostream>
#include <vector>

using namespace std;

// Функция создает массив из делителей проверяемого числа
vector<int> dividerslist(unsigned int quantity)
{
	vector<int> Data;
	int i = 1;
	// Бесконечный цикл
	while (123456789)
	{
		/*
		* Проверяется делимость на все числа, начиная с 1
		* Если проверяемое число равно делителю - то это и есть вывод функции(цикл заканчивается)
		* (Первое условия всегда сраьатывает последним)
		*/
		
		// Условие 1
		if (i == quantity)
		{
			Data.push_back(i);
			break;
		}
		
		// Условие 2
		/*
		* Если проверяемое число делится нацело на i, то 
		* проверяемое число уменьшается в i раз и переменная i обнуляется
		*/
		else if ((i != 1) && ((quantity % i) == 0))
		{
			Data.push_back(i);
			quantity /= i;
			i = 0;
		}

		i++;
	}
	// Функция возвращает массив делителей проверяемого числа
	return Data;
}

// Функция выводит все в нужном виде
void print_factorization(unsigned int quantity)
{
	int degreeofnum;
	vector<int> Data = dividerslist(quantity);
	int size = Data.size();

	for (int i = 0; i < size; i++)
	{
		/*
		* Вывод первого элемента
		* Отдельно условие для того, чтобы перед ним не было знака * или ^
		*/
		if (i == 0)
		{
			cout << Data[i];
		}

		/*
		* Проверка повторяемости чисел в массиве(степень)
		*/
		else if (Data[i] == Data[i - 1])
		{
			degreeofnum = 1;
			while (Data[i] == Data[i - 1])
			{
				i++;
				degreeofnum++;
				if (i == size) break;
			}
			cout << "^" << degreeofnum;
			i--;
		}

		// Если число не повторяется, то зписывается с "*"
		else
		{
			cout << "*" << Data[i];
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");

	unsigned int quantity;
	cout << "Введите число: " << endl;
	cin >> quantity;
	print_factorization(quantity);
}