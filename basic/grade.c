#include <stdio.h>

int main(void) {
    char grade;
    char name[20];
    
    printf("input grade: ");
    scanf("%c", &grade);
    printf("input name: ");
    scanf("%s", name);
    printf("%s's grade is %c.\n", name, grade);
    
    return 0;
}
