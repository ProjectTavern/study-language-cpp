#include <stdio.h>

int get_pos(void);

int main(void) {
    int result;
    
    result = get_pos();
    printf("반환값: %d\n", result);
    
    return 0;
}

int get_pos(void) {
    int pos;
    
    printf("양수 입력: ");
    scanf("%d", &pos);
    
    while(pos < 0) {
        printf("음수가 입력되었습니다.\n");
        printf("양수 입력: ");
        scanf("%d", &pos);
    }
    
    return pos;
}
