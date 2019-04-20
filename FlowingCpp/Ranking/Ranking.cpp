#include <cstdio>
#include <cstring>

const char defaultMessage[10] = "Array";

void printArray(const int a[], int length, const char message[] = defaultMessage);
void reverseArray(const int a[], int b[], int length);
void reverseString(const char src[], char reversedSrc[]);
void addDescending(int a[], int length, int value);

int main() {
	int a[10] = { 3, 4, 24, 65, 62, 4, 5, 67, 23 };
	int b[10];
	char src[] = "game over !";
	char reversedSrc[255];

	reverseArray(a, b, 10);
	reverseString(src, reversedSrc);

	printArray(a, 10, "Array A");
	printArray(b, 10, "Array B");
	printf("src = %s\n", src);
	printf("reversedSrc = %s\n", reversedSrc);
}

void printArray(const int a[], int length, const char message[]) {
	printf("%s =>", message);
	for (int i = 0; i < length; i++) {
		printf("%3d", a[i]);
	}
	printf("\n");
}

void reverseArray(const int a[], int b[], int length) {
	for (int i = 0; i < length; i++) {
		b[length - i - 1] = a[i];
	}
}

void reverseString(const char src[], char reversedSrc[]) {
	int length = strlen(src);
	for (int i = 0; i < length; i++) {
		reversedSrc[length - i - 1] = src[i];
	}
	reversedSrc[length] = '\0';
}

void addDescending(int a[], int length, int value) {
	if (value > a[length - 1]) {
		a[length - 1] = value;
		for (int i = length - 1; i > 0; i--) {
			if (value < a[i - 1]) {
				return;
			}
			a[i] = a[i - 1];
			a[i - 1] = value;
		}
	}
}