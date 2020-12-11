#include <iostream>
#include <vector>

using namespace std;

vector<int> Sorting(vector<int> array, int quantity)
{
	// Сортировка пузырьком по убыванию
	int qs = quantity - 1;
	for (int i = 0; i < qs; i++)
	{
		for (int j = 0; j < qs - i; j++)
		{
			if (array[j] < array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	return array;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Введите количество сигалов: " << endl;
	int quantity;
	cin >> quantity;
	vector<int> first(quantity);
	cout << "Введите сигналы: " << endl;
	for (int i = 0; i < quantity; i++)
	{
		cin >> first[i];
	}

	vector<int> last;
	int size = 0;
	for (int i = 0; i < quantity; i++)
	{
		last.push_back(first[i]);
		size++;
		last = Sorting(last, size);

		if (size <= 5)
		{
			//Выводит все элементы (если их не больше 5)
			for (int j = 0; j < size; j++)
			{
				cout << last[j] << " ";
			}
			cout << endl;
		}

		else
		{
			// Цикл выводит только 5 последних и уже отсортированных элементов
			for (int k = size - 5; k < size; k++)
			{
				cout << last[k] << " ";
			}
			cout << endl;
		}
	}

}