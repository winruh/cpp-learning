#include <iostream>
using namespace std;

void pomena(int* x)
{
    *x = 100;
}

int main()
{
    int age = 25;
    cout << "main: " << age << endl;
    cout << "asd " << &age << endl;
    pomena(&age);
    cout << "pomena: " << age << endl;
    cout << "asd " << &age << endl;
    return 0;
}