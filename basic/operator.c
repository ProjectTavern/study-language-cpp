#include <stdio.h>

int main(void) {
    int a, b;
    int sum, sub, mul, inv;
    
    a = 10;
    b = 20;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    inv = -a;
    
    printf("value a: %d, value b: %d\n", a, b);
    printf("add: %d\n", sum);
    printf("subtraction: %d\n", sub);
    printf("multiply: %d\n", mul);
    printf("inverse number: %d\n", inv);
    
    return 0;
}
