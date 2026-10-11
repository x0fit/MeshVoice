#include <iostream>
#include <string>

int main() {
    std::string name;
    
    std::cout << "Welcome to MeshVoice!\n";
    std::cout << "Enter your name: ";
    
    std::getline(std::cin, name);

    std::cout << "Hello, " << name << "!\n";
    std::cout << "Learning without limits!\n";
    
    return 0;
}
