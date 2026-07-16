#include <iostream>
using namespace std;

void obmen(int& a, int& b)  {
     int temp = a;
     a = b;
     b = temp;
}

int main() {
    int a = 5;
    int b = 10;
    cout << "do: " << a <<" " << b << endl;
    cout << "adres: " << &a <<" " << &b << endl;

    obmen(a, b);

    cout << "posle: " << a <<" " << b << endl;
    cout << "adres: " << &a <<" " << &b << endl;

    return 0;
}