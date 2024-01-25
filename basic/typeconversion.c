#include <stdio.h>

int main(void) {
    int a = 20;
    int b = 3;
    double res;
    
    res = ((double)a) / ((double)b);
    printf("a = %d, b = %d\n", a, b);
    
    a = (int)res;
    printf("result of (a / b) = %.1lf\n", res);
    
    a = (int)res;
    printf("(int) result of %.1lf = %d\n", res, a);
    
    return 0;
}
