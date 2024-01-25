#include <cstdio>

void findMinMaxValue(int* numberArray, int length, int* pointerMin, int* pointerMax) {
	if (pointerMin != NULL) {
		*pointerMin = numberArray[0];
		for (int index = 1; index < length; index++) {
			if (*pointerMin > numberArray[index]) {
				*pointerMin = numberArray[index];
			}
		}
	}

	if (pointerMax != NULL) {
		*pointerMax = numberArray[0];
		for (int index = 1; index < length; index++) {
			if (*pointerMax < numberArray[index]) {
				*pointerMax = numberArray[index];
			}
		}
	}
}

void main() {
	int numberArray[10] = { 1, 2, 3, 4, 10, 9, 8, 7, 6 };
	int minValue;
	int maxValue;

	findMinMaxValue(numberArray, 10, &minValue, &maxValue);
	printf("최소값: %2d\n", minValue);
	printf("최대값: %2d\n", maxValue);

	findMinMaxValue(numberArray, 10, &minValue, NULL);
	printf("최소값: %2d\n", minValue);

	findMinMaxValue(numberArray, 10, NULL, &maxValue);
	printf("최대값: %2d\n", maxValue);
}