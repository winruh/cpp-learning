#include <iostream>
using namespace std;

void test() {
    int x = 5;
    cout << "x: " << &x << endl;
}
int main () {
    test();
    test();
    test();
    
    return 0;
}