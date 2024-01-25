#include <iostream>

int val = 100;

int main(void) {
    int val = 50;
    ::val++;
    std::cout << val << std::endl;
    std::cout << ::val << std::endl;
    return 0;
}
