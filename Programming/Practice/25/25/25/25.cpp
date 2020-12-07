#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<int> BozoSort(vector<int> array, bool sorting)
{
	bool sorted = false;// отсортирован ли массив?
	int n = array.size();// размер массива

	while (!sorted)
	{
		if (sorting)
		{
			int randvalue1 = rand() % n;// Случайный номер в массиве
			int randvalue2 = rand() % n;// Случайный номер в массиве

			// Выбранны до этого элементы массива меняются значениями
			int temp = array[randvalue1];
			array[randvalue1] = array[randvalue2];
			array[randvalue2] = temp;

			sorted = true;

			// Цикл проверяет: отсортировался ли массив?
			for (int i = 1; i < n; i++)
			{
				if (array[i] < array[i - 1])
				{
					sorted = false;
				}
			}
		}
		if (!sorting)
		{
			int randvalue1 = rand() % n;// Случайный номер в массиве
			int randvalue2 = rand() % n;// Случайный номер в массиве

			// Выбранны до этого элементы массива меняются значениями
			int temp = array[randvalue1];
			array[randvalue1] = array[randvalue2];
			array[randvalue2] = temp;

			sorted = true;

			// Цикл проверяет: отсортировался ли массив?
			for (int i = 1; i < n; i++)
			{
				if (array[i - 1] < array[i])
				{
					sorted = false;
				}
			}
		}
	}
	return array;
}

vector<int> BozoSort(vector<vector<int>> array2D, bool sorting)
{
	int n = array2D.size();//длина 2мерного массива
	int N2D = pow(n, 2);//площадт 2мерного массива
	int i = 0;
	vector<int> array(N2D);//новый одномерный массив

	// Цикл берет данные из 2мерного массива и на их основе заполняет одномерный
	while (i < N2D)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				array[i] = array2D[j][k];
				i++;
			}
		}
	}
	if (sorting)
	{
		return BozoSort(array, true);
	}
	if (!sorting)
	{
		return BozoSort(array, false);
	}
}

vector<int> BozoSort(int a, int b, int c, bool sorting)
{
	vector<int> array(3);// Создается массив

	// Заданные в функции 3 переменные становятся элементами массива
	array[0] = a;
	array[1] = b;
	array[2] = c;

	if (sorting)
	{
		return BozoSort(array, true);
	}
	if (!sorting)
	{
		return BozoSort(array, false);
	}
}

void Output(vector<int> array, int n)
{// Функция для вывода массивов на экран
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int i = 0;
	int n;
	cout << "Введите кол-во элементов:" << endl;
	cin >> n;
	vector<int> array(n);
	int t = sqrt(n);
	vector<vector<int>> array2D(t, vector<int>(t));
	cout << "Введите элементы:" << endl;
	
	// Из введенных чисел создается массив
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	cout << endl;
	 // Из созданного до этого массива создается новый 2мерный
	while (i < n)
	{
		for (int j = 0; j < t; j++)
		{
			for (int k = 0; k < t; k++)
			{
				array2D[j][k] = array[i];
				i++;
			}
		}
	}

	// Для работы с третьей функцией
	int a = array[0];
	int b = array[1];
	int c = array[2];
	
	//Вывод на экран
	array = BozoSort(array, true);
	Output(array, n);
	array = BozoSort(array, false);
	Output(array, n);
	array = BozoSort(array2D, true);
	Output(array, n);
	array = BozoSort(array2D, false);
	Output(array, n);
	array = BozoSort(a, b, c, true);
	Output(array, 3);
	array = BozoSort(a, b, c, false);
	Output(array, 3);
}