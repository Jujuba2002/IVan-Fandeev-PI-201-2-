#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUSSIAM");
	double(x0);
	double(v0);
	double(t);
	double(a);
	double(g);
	double(xt);
	a = g = 9.8;
	cout << "������� �������� x0, v0, t (�� �������):" << endl;
	cin >> x0 >> v0 >> t;
	xt = (double(x0) + double(v0) * double(t) - double(a) * double(t) * double(t) / 2);
	cout << abs( double(xt) - double(x0)) << endl;
	cout << "� ����� ������ ���������� ��� ������� ����� ������� a*t*t/2 � 1/2*a*t*t," << endl;
	cout << "�� � ����� ���������������� �� C++ ���������� ������ ����� ��� ������ a*t*t/2";
}