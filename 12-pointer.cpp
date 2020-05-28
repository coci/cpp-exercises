// pointer

#include <iostream>

int main() {

    // A pointer holds the address of another object

    int age = 28;
    int *p = &age;

    std::cout << "age is : " << age << std::endl; // print 28
    // if we print p it will print the address of the object that it points to
    std::cout << "p is : " << p << std::endl;  // print p is : 0x7ffee521993c

    age = 30;

    std::cout << "age is : " << age << std::endl;  // print 30
    // to access to the value of p we use : *p
    std::cout << "p is : " << *p << std::endl;  // print 30


    /* if we assign new value to pointer in fact we change the value of object that
        pointer points to
    */
    *p = 10;

    std::cout << "age is : " << age << std::endl;  // print 10

    // it prints 0x7ffee37bd93c but with different value
    std::cout << "p is : " << p << std::endl;
    std::cout << "p is : " << *p << std::endl;  // print 10


    // create null pointer
    int *point = nullptr;

    // check if pointer is null or not 
    if (point) {
        std::cout << "there is object" << std::endl;
    }

    // void pointer can point to any type of object

    double pi = 3.14, *pd = &pi;
    void *py = &pi;
    py = pd;

}