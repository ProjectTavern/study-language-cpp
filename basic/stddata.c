#include <stdio.h>

int main(void) {
    char name[20];
    int age;
    double height;
    
    printf("input name: ");
    scanf("%s", name);
    printf("input age, height: ");
    scanf("%d%lf", &age, &height);
    printf("[[%s]] (age) %d, (height) %.1fcm\n", name, age, height);
    
    return 0;
}
