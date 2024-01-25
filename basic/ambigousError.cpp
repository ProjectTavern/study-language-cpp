#include <iostream>

int function(int a = 10) {
    return a + 1;
}

int function(void) {
    return 10;
}

int main(void) {
    std::cout << function() << std::endl;
    return 0;
}
