#include <stdio.h>

void main() {
	int x = 10;
	int* px = &x;
	int** ppx = &px;
	printf("���� x�� �� \ %d = %d = %d\n", x, *px, **ppx);
	printf("���� x�� �ּ� \ %p = %p = %p\n", &x, px, *ppx);
	printf("������ px �ּ� = %p = %p\n", &px, ppx);
	printf("������ ppx �ּ� = %p\n", &ppx);
	*px = 20;
	printf("���� x�� �� = %d = %d = %d\n", x, *px, **ppx);
}