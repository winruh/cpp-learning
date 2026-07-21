#include <iostream>
#include <memory>
using namespace std;

int udvoy(int chislo)
{
    return chislo * 2;
}

double dabl(double chislo)
{
    return chislo * 2;
}

int main()
{
    unique_ptr<int> p2 = make_unique<int>(100);
    unique_ptr<double> d = make_unique<double>(50.5);

    cout << *p2 << endl;
    *p2 = 70;
    *p2 = udvoy(*p2);
    cout << *p2 << endl;

    cout << *d << endl;
    *d = 123.4;
    *d = dabl(*d);
    cout << *d << endl;

    return 0;
}

// кривой int и double 1 действие 2 разные функции но так надо это показательный вариант как оно работает 