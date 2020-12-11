#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

template <typename T>
vector<T> BozoSort(vector<T> array, bool sorting = true)
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
			T temp = array[randvalue1];
			array[randvalue1] = array[randvalue2];
			array[randvalue2] = temp;

			sorted = true;

			// Цикл проверяет: отсортировался ли массив?
			for (int i = 1; i < n; i++)
			{
				if (array[i] < array[i - 1])
				{
					sorted = false;
					break;
				}
			}
		}
		else
		{
			int randvalue1 = rand() % n;// Случайный номер в массиве
			int randvalue2 = rand() % n;// Случайный номер в массиве

			// Выбранны до этого элементы массива меняются значениями
			T temp = array[randvalue1];
			array[randvalue1] = array[randvalue2];
			array[randvalue2] = temp;

			sorted = true;

			// Цикл проверяет: отсортировался ли массив?
			for (int i = 1; i < n; i++)
			{
				if (array[i - 1] < array[i])
				{
					sorted = false;
					break;
				}
			}
		}
	}
	return array;
}

template <typename T>
vector<T> BozoSort(vector<vector<T>> array2D, bool sorting = true)
{
	int n = array2D.size();//длина 2мерного массива
	int N2D = pow(n, 2);//площадт 2мерного массива
	int i = 0;
	vector<T> array(N2D);//новый одномерный массив

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

template <typename T>
vector<T> BozoSort(T a, T b, T c, bool sorting = true)
{
	vector<T> array(3);// Создается массив

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

template <typename T>
void Output(vector<T> array, int n)
{// Функция для вывода массивов на экран
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RUSSIAN");
	int n1;
	cout << "Введите кол-во элементов массива double:" << endl;
	cin >> n1;
	vector<double> array1(n1);
	int t1 = sqrt(n1);
	vector<vector<double>> array2D1(t1, vector<double>(t1));
	cout << "Введите элементы:" << endl;

	// Из введенных чисел создается массив1
	for (int i = 0; i < n1; i++)
	{
		cin >> array1[i];
	}
	cout << endl;
	// Из созданного до этого массива1 создается новый 2мерный
	int i = 0;
	while (i < n1)
	{
		for (int j = 0; j < t1; j++)
		{
			for (int k = 0; k < t1; k++)
			{
				array2D1[j][k] = array1[i];
				i++;
			}
		}
	}

	// Для работы с третьей функцией
	double a1 = array1[0];
	double b1 = array1[1];
	double c1 = array1[2];

	int n2;
	cout << "Введите кол-во элементов массива double:" << endl;
	cin >> n2;
	vector<string> array2(n2);
	int t2 = sqrt(n2);
	vector<vector<string>> array2D2(t2, vector<string>(t2));
	cout << "Введите элементы:" << endl;

	// Из введенных чисел создается массив2
	for (int i = 0; i < n2; i++)
	{
		cin >> array2[i];
	}
	cout << endl;
	// Из созданного до этого массива2 создается новый 2мерный
	i = 0;
	while (i < n2)
	{
		for (int j = 0; j < t2; j++)
		{
			for (int k = 0; k < t2; k++)
			{
				array2D2[j][k] = array2[i];
				i++;
			}
		}
	}

	// Для работы с третьей функцией
	string a2 = array2[0];
	string b2 = array2[1];
	string c2 = array2[2];

	//Вывод на экран массивов double
	array1 = BozoSort(array1);
	Output(array1, n1);
	array1 = BozoSort(array1, false);
	Output(array1, n1);
	array1 = BozoSort(array2D1);
	Output(array1, n1);
	array1 = BozoSort(array2D1, false);
	Output(array1, n1);
	array1 = BozoSort(a1, b1, c1);
	Output(array1, 3);
	array1 = BozoSort(a1, b1, c1, false);
	Output(array1, 3);

	//Вывод на экран массивов string
	array2 = BozoSort(array2);
	Output(array2, n2);
	array2 = BozoSort(array2, false);
	Output(array2, n2);
	array2 = BozoSort(array2D2);
	Output(array2, n2);
	array2 = BozoSort(array2D2, false);
	Output(array2, n2);
	array2 = BozoSort(a2, b2, c2);
	Output(array2, 3);
	array2 = BozoSort(a2, b2, c2, false);
	Output(array2, 3);
}