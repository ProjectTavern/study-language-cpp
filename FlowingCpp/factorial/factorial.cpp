#include <stdio.h>

int factorial(int);

int main() {
	printf("%d", factorial(10));
}

int factorial(int number) {
	int result = 1;
	for (int i = 1; i <= number; i++) {
		result *= i;
	}
	return result;
}