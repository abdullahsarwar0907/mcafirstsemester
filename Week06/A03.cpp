// Problem 3. Write a C++ Program to print the address of the
// Variable Using a Pointer.
#include <iostream>
using namespace std;
int main() {
    int n,*p;
    cout << "Enter a number: ";
    cin >> n;

    p = &n;
    cout << "Value of variable = " << *p << endl;
    cout << "Address of variable = " << p << endl;
    return 0;
}
