#ifndef PROVERKA2
#define PROVERKA2

#include "Factorial.h"

int so4etaniya(int k, int n) {

	int Ckn = factorial(n) / (factorial(k) * factorial(n - k));

	return(Ckn);
}

#endif