#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool IsPositive(int i) {
    if (i < 0) return false;
    else return true;
}

int main(void) {
    int num;
    bool result;
    
    cout << "숫자 입력: ";
    cin >> num;
    
    result = IsPositive(num);
    if (result) printf("Positive number \n");
    else printf("Negative number \n");
}
