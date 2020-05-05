#include <iostream>

int main() {

    // convert type to other type :

    bool is_programmer = 1;

    int one = is_programmer; // if "is_programmer" is true it will be 1 otherwise 0

    one = 3.14; // this will be 3

    float pi = 3.14 ;

    std::cout << is_programmer << " "<< one << " " << pi << std::endl;

    return 0;

}