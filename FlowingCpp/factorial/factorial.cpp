#include <stdio.h>
#include "add.h"

int factorial(int);

int main() {
	printf("%d\n", add(1, 2));
	printf("%d\n", factorial(10));
}

int factorial(int number) {
	int result = 1;
	for (int i = 1; i <= number; i++) {
		result *= i;
	}
	return result;
}