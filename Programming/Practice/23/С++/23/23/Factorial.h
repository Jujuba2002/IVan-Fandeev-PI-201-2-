#pragma once

int factorial(int n) {
	int vivod = 1;
	for (int i = 1; i <= n; i++){
		vivod *= i;
	}
	return vivod;
}