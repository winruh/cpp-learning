#include <iostream>
using namespace std;

void p(int x) {
    x = 100;
    
    cout << "zhachenie x: " << x << endl;
    cout << "adres x: " << &x << endl;
}

int main() {
    int age = 25;

    cout << "znachenie age: " << age << endl;
    cout << "adres age: " << &age << endl;

    p(age);

    return 0;
}