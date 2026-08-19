#include <iostream>
using namespace std;

int* sozday(int znachenie) {
    int* p = new int;
    *p = znachenie;
    return p;
}

int main() {
    int* q = sozday(10);
    q = sozday(30);

    cout << "xz: " << *q << endl;
    cout << "sx: " << q << endl;
    
    delete q;
    q = nullptr;

    return 0;
}

// я командой q = sozday(30); поменял куда смотрит указатель q а прошлый адрес остался там же и так же занимает место потому что удалил я только нвоый тоесть 30 и указатель и место в куче


int* sozday(int znachenie) {
    int* p = new int;
    *p = znachenie;
    return p;
}

int main() {
    int* q = sozday(10);

    cout << "xz: " << *q << endl;
    cout << "sx: " << q << endl;
    
    delete q;
    q = nullptr;

    return 0;
}

// код без утечек
