#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Вариант программы с помощью дополнительной переменной:" << endl;
	double(a);
	double(b);
	double(c);
	cout << "Введите числа a и b:" << endl;
	cin >> a;
	cin >> b;
	cout << "a = ";
	cout << double(a) << endl;
	cout << "b = ";
	cout << double(b) << endl;
	c = a;
	a = b;
	b = c;
	cout << "После выполнения программы a и b поменялись значениями:" << endl;
	cout << "a = ",
		cout << double(a) << endl;
	cout << "b = ",
		cout << double(b) << endl;
	cout << "";
	cout << "";
	cout << "";
	cout << "Вариант программы без помощи дополнительной переменной:" << endl;
	cout << "Введите числа a и b:" << endl;
	cin >> a;
	cin >> b;
	cout << "a = ";
	cout << double(a) << endl;
	cout << "b = ";
	cout << double(b) << endl;
	swap(a, b);
	cout << "После выполнения программы a и b поменялись значениями:" << endl;
	cout << "a = ";
	cout << double(a) << endl;
	cout << "b = ";
	cout << double(b) << endl;
}