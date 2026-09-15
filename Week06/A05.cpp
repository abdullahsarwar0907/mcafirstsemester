// Problem 5. Write a C++ Program to Print a String Using a Pointer.
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s, *p;
    cout << "Enter a string: ";
    cin >> s;

    p = &s;
    cout << "Value of string = " << *p << endl;
    cout << "Address of variable = " << p << endl;
    return 0;
}
