#include <iostream>
using namespace std;

int main() {
    int chisla[5] = {1, 3, 15, 50, 20};
    int summa = 0;
    for (int i = 0; i < 5; i++) {
        cout << chisla[i] << endl;
        summa = summa + chisla[i];
    }
    cout << summa << endl;

    return 0;
}
