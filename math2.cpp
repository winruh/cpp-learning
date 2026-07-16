#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age:";
    cin >> age;

    if (age >= 18) {
        cout << "Your are an abult" << endl;
    } else {
        cout << "Your are a minor" << endl;
    }

    return 0;
}