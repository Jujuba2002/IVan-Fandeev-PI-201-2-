#include <iostream>
#include "Factorial.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "n	n!" << endl;
	for (int i = 1; i <= 10; i++) {
		cout << i << "	" << factorial(i) << endl;
	}

}