#include <iostream>
using namespace std;

int main() {
    int chisla[4] = {25, 30, 18, 45};

    cout << chisla[0] << endl;
    cout << chisla[1] << endl;
    cout << chisla[2] << endl;
    cout << chisla[3] << endl;

    chisla[2] = 99;
    cout << chisla[2] << endl;

    cout << chisla[0] + chisla[3] << endl;

    return 0;
}
