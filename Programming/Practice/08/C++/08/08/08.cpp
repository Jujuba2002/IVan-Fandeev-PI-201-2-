#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	float a, b;
	char c;
	cout << "Введите пример: \n";
	cin >> a >> c >> b;
	switch (c)
	{
	case 43:
		cout << a + b << endl;
		break;
	case 126:
		cout << a - b << endl;
		break;
	case 42:
		cout << a * b << endl;
		break;
	case 47:
		if (b != 0) {
			cout << a / b << endl;
		}
		else {
			cout << "Ошибка: делитель равен 0";
		}
		break;
	default:
		cout << "Неравильный ввод";
		break;
	}
}