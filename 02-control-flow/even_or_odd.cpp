#include <iostream>
using namespace std;

int main() {
    
    int chislo;
    cout << "Enter your chislo: ";
    cin >> chislo;
    
    if (chislo == 2) {
        cout << "bruh" << endl;
    } else if (chislo % 2 == 0) {
        cout << "chetnoe" << endl;
    } else {
        cout << "ne chetnoe" << endl;
    }
    
    return 0;
}
