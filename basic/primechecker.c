#include <stdio.h>

int prime_check(int n);

int main(void) {
    int result;
    
    result = prime_check(32767);
    if (result == 1) printf("소수입니다.\n");
    else printf("소수가 아닙니다.\n");
    
    return 0;
}

int prime_check(int n) {
    for (int i = 2; i < n; i++) {
        if((n % i) == 0) return 0;
    }
    
    return 1;
}
