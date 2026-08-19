#include <iostream>
using namespace std;

int main() {

    int chislo;
    cout << "Enter your chislo: ";
    cin >> chislo;

    if (chislo > 3) {
        cout << "bolse" << endl;
    } else if (chislo == 3) {
        cout << "Yeah its my chislo" << endl;
    } else {
        cout << "menshe" << endl;
    }
    return 0;
}
