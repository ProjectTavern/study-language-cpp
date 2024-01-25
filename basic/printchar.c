#include <stdio.h>

void print_char(char ch, int cnt);

int main(void) {
    print_char('@', 5);
    
    return 0;
}

void print_char(char ch, int cnt) {
    for (int i = 0; i < cnt; i++) {
        printf("%c", ch);
    }
    printf("\n");
}
