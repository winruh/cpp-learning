#include <iostream>
using namespace std;

int main() {
    for (int age = 1; age <= 20; age++) {
        cout << age;
        if (age % 2 == 0) {
            cout << " even" << endl;
        } else {
            cout << " odd" << endl;
        }       
    }
}