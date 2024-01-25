#include <iostream>

using std::cout;
using std::endl;

int main(void) {
    int val = 10;
    int *pVal = &val; // 주소값
    int &rVal = val; // 동일 레퍼런스 선언
    int orVal = val; // 다른 레퍼런스 선언
    
    cout << pVal << endl;
    cout << rVal << endl;
    
    cout << &rVal << endl;
    cout << &orVal << endl;
    
    return 0;
}
