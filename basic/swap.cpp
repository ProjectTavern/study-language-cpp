#include <iostream>

void swap(int *a, int *b);
void swap(char *a, char *b);
void swap(double *a, double *b);

int main() {
    int num1 = 20;
    int num2 = 30;
    swap(&num1, &num2);
    std::cout << num1 << ' ' << num2 << std::endl;
    
    char ch1 = 'a';
    char ch2 = 'z';
    swap(&ch1, &ch2);
    std::cout << ch1 << ' ' << ch2 << std::endl;
    
    double dbl1 = 1.111;
    double dbl2 = 5.555;
    swap(&dbl1, &dbl2);
    std::cout << dbl1 << ' ' << dbl2 << std::endl;
    
    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void swap(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}
