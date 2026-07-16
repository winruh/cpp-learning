#include <iostream>
#include <string>

int main() {
    
    std::string name;
    
    double hight = 1.80;
    char bukva = 'S';
    
    std::cout << "Hello entry my name here:";
    std::cin >> name;
    std::cout << "Hello my name " << name << "!" << std::endl;

    std::cout << "My hight:" << hight << std::endl;
    std::cout << "My favorite love: " << bukva << std::endl;

    return 0;
}