#include <iostream>
using namespace std;

int main()
{
    int year = 2026;
    int age = 25;
    int* p = &age;
    p = &year;

    *p = 100;

    cout << "zxc: " << age << endl;
    cout << "adf: " << year << endl;

    return 0;
}