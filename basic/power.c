#include <stdio.h>

int my_power(int base, int exp);

int main(void) {
    int result;
    
    result = my_power(2, 10);
    printf("%d\n", result);
    
    return 0;
}

int my_power(int base, int exp) {
    int result = 1;
    
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    
    return result;
}
