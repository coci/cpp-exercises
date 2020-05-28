// compound type : Reference

#include <iostream>

using namespace std;

int main() {

    int val = 10; // initialize 'val' with 10
    int &refVal = val; // refer 'refVal' to 'val'

    cout << " value of 'val' : " << val << endl;  // print 10
    cout << " value of 'refVal' : " << refVal << endl; // print 10

    val = 20; // 

    cout << " value of 'val' : " << val << endl; // print 20
    cout << " value of 'refVal' : " << refVal << endl; // print 20
}