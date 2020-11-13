#include <iostream>
#include <iomanip>
#include "Factorial.h"
#include "Sinus.h"
#include "So4etaniya.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	cout << "n	n!" << endl;
	for (int i = 1; i <= 10; i++) {
		cout << i << "	" << factorial(i) << endl;
	}

	double const PI = 3.1415;

	cout << "x	sin(x)" << endl;
	for (double i = 0; i <= (PI/4); i+= (PI/180)) {
		cout << setprecision(4) << i << "	" << sinus(i, 5) << endl;
	}

	cout << "k	C(k, 10)" << endl;
	for (int k = 1; k <= 10; k++) {
		cout << k << "	" << so4etaniya(k, 10) << endl;
	}
}