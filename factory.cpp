#include <iostream>
using namespace std;

int* udvoy(int chislo) {
    int* p = new int;
    *p = chislo*2;
    return p;
}

int main () {
    int* got = udvoy(21);
    int* got2 = udvoy(50);

    cout << "znachenie: " << *got << endl;
    cout << "adres: " << got << endl;

    cout << "znachenie: " << *got2 << endl;
    cout << "adres: " << got << endl;

    delete got;
    got = nullptr;

    delete got2;
    got2 = nullptr;

    return 0;
}