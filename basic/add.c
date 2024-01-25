#include <stdio.h>

int add(int x, int y);

int main(void) {
    int a = 10;
    int b = 20;
    int result;
    
    result = add(a, b);
    printf("result: %d\n", result);
    
    return 0;
}

int add(int x, int y) {
    return x + y;
}
