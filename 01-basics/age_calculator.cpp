#include <iostream> 

int main() {
    int current;
    int year;

    std::cout << "Enter birth year:";
    std::cin >> year;

    std::cout << "Enter current year:";
    std::cin >> current;

    int age = current - year;

    std::cout << "Your age:" << age << std::endl;

    return 0;
}
