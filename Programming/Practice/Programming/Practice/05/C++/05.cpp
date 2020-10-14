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
	cout << "¬ведите значени€ x0, v0, t (по очереди):" << endl;
	cin >> x0 >> v0 >> t;
	xt = (double(x0) + double(v0) * double(t) - double(a) * double(t) * double(t) / 2);
	cout << abs( double(xt) - double(x0)) << endl;
	cout << "— точки зрени€ математики нет разницы между записью a*t*t/2 и 1/2*a*t*t," << endl;
	cout << "но в плане программировани€ на C++ правильный расчет будет при записи a*t*t/2";
}