#include <stdio.h>

void main() {
	int x = 10;
	int* px = &x;
	int** ppx = &px;
	printf("변수 x의 값 \ %d = %d = %d\n", x, *px, **ppx);
	printf("변수 x의 주소 \ %p = %p = %p\n", &x, px, *ppx);
	printf("포인터 px 주소 = %p = %p\n", &px, ppx);
	printf("포인터 ppx 주소 = %p\n", &ppx);
	*px = 20;
	printf("변수 x의 값 = %d = %d = %d\n", x, *px, **ppx);
}