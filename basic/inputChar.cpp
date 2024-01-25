#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        char x, y, z;
        scanf("%c%c%c", &x, &y, &z);
        printf("%d %d %d\n", x, y, z);
    }
    return 0;
}
