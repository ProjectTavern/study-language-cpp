#include <stdio.h>

int main(void) {
    int a = 10;
    double b = 3.4;
    
    printf("(int): %d\n", sizeof (a));
    printf("(double): %d\n", sizeof (b));
    printf("%d\n", sizeof (10));
    printf("%d\n", sizeof (1.5 + 3.4));
    printf("%d\n", sizeof (char));
    
    return 0;
}
