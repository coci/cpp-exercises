#include <iostream>

int main() {
    int age = 28;
    char name[15] = "soroush safari";
    bool is_programmer = 1; // true = 1 , false = 0
    float pi = 3.14;

    if (is_programmer) {
        std::cout << "my name is " << name <<" .";
        std::cout << "I'm programmer and ";
        std::cout << "i'm " << age <<" years old and then ";
        std::cout << "i know pi is: " << pi << std::endl;
    } else {
        std::cout << "my name is " << name <<" .";
        std::cout << "I'm not programmer and ";
        std::cout << "i'm " << age <<" years old and then ";
        std::cout << "i know pi is: " << pi << std::endl;
    }
    
    return 0;
}