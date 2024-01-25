#include <stdio.h>
#include <string.h>

int main(void) {
    char fruit[11] = "strawberry";
    printf("%s\n", fruit);
    strcpy(fruit, "banana"); //copy banana
    printf("%s\n", fruit);
    
    return 0;
}
