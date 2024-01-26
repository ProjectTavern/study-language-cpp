#include <stdio.h>
#include <algorithm>
// using namespace std;

int count = 0;

int main()
{
    printf("%d\n", std::max(1,2));
    printf("%d\n", ::count);
}