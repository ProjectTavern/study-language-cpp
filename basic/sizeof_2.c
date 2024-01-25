#include <stdio.h>

int main(void) {
    int res;
    res = sizeof (short) > sizeof (long);
    printf("%s\n", res == 1 ? "short" : "long");
    
    return 0;
}
