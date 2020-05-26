#include <iostream>
#include <string>  // this represent sequence of character


int main() {
    /* 
    important note :
    character literal ==> 'a'
    string literal ==> "hello"

    string literal : a array of constant characters

    lieterals : the value and type are obvious
    */
   
    std::cout << "hello " "world" << std::endl; // this concate those 2 string literals
    std::string name = "soroush" ;
    std::cout << name << std::endl;

    return 0; 
}