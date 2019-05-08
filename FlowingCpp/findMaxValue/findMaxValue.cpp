#include <cstdio>
int findMaxValue(int* number, int length) {
	int maxValue = number[0];
	for (int index = 1; index < length; index++) {
		if (maxValue < number[index]) {
			maxValue = number[index];
		}
	}
	return maxValue;
}

void main() {
	int numberArray[10] = { 1, 2, 3, 4, 5, 50, 4, 3, 4, 5 };
	printf("max value: %d\n", findMaxValue(numberArray, 10));
}