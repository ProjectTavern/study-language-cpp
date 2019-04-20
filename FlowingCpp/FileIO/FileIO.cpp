#include <stdio.h>
#include <stdlib.h>

void fprintArray(int a[], int length, FILE* fp = stdout);

int main() {
	FILE* fp;
	int a[10];
	int b[10];

	for (int i = 0; i < 10; i++) {
		a[i] = rand();
	}

	printf("Original data: ");
	fprintArray(a, 10);

	fopen_s(&fp, "TestFile.txt", "w");
	if (fp != NULL) {
		fprintArray(a, 10, fp);
		fclose(fp);
	}
	fopen_s(&fp, "TestFile.txt", "r");
	if (fp != NULL) {
		for (int i = 0; i < 10; i++) {
			fscanf_s(fp, "%d", &(b[i]));
		}
		printf("TestFile: ");
		fprintArray(b, 10);
		fclose(fp);
	}
}

void fprintArray(int a[], int length, FILE* fp) {
	for (int i = 0; i < length; i++) {
		fprintf(fp, "%d ", a[i]);
	}
	fprintf(fp, "\n");
}