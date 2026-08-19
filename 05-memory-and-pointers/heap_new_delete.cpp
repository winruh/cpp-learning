#include <iostream>
using namespace std;

int main () {
    int* p = new int;
    *p = 25;
    int y = 25;

    cout << "znachenie: " << *p << endl;
    cout << "gde legit: " << p << endl;
    cout << "umer: " << &y << endl;

    delete p;
    p = nullptr;

    return 0;
}
