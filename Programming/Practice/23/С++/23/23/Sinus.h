#ifndef PROVERKA1
#define PROVERKA1

#include <cmath>
#include "Factorial.h"

double sinus(double x, int k) {

	double sin_x = x;
	
	for (int i = 1; i <= k; i++) {

		sin_x = (sin_x + pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1));

	}

	return sin_x;
}

#endif

