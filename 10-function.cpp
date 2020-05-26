#include <iostream>
#include <string>

using namespace std;

string greetings(string name) {
    return "hello " + name;
}
int main() {
    string name;
    cout << "please enter name : " <<endl;
    cin >> name;
    cout << greetings(name) << endl; 
    
    return 0;
}