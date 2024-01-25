#include <iostream>

using std::cout;
using std::endl;
using std::cin;

struct _Person {
    int age;
    char name[20];
    char personalID[20];
};

typedef struct _Person Person;

void ShowData(Person person) {
    cout << "***** 개인정보 출력 *****" <<endl;
    cout << "이   름: " << person.name << endl;
    cout << "주민번호: " << person.personalID << endl;
    cout << "나   이: " << person.age << endl;
}

int main(void) {
    Person man;
    
    cout << "이   름: ";
    cin >> man.name;
    cout << "나   이: ";
    cin >> man.age;
    cout << "주민번호: ";
    cin >> man.personalID;
    
    ShowData(man);
    
    return 0;
}
