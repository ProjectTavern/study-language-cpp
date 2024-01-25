#include <iostream>

int main() {
    int sum = 0;
    int num = 0;
    
    for (int i = 0; i < 10; i++) {
        std::cout << "입력: ";
        std::cin >> num;
        sum += num;
    }
    
    std::cout << "합계: " << sum << std::endl;
    return 0;
}
