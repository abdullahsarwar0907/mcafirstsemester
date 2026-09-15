// Problem 4. Write a C++ Program for Increment and Decrement
// an Integer Using a Pointer.
#include <iostream>
using namespace std;
int main() {
    int n,*p;
    cout << "Enter a number: ";
    cin >> n;

    p = &n;
    cout << "Original value = " << *p << endl;
    cout << "After increment = " << ++(*p) << endl;
    cout << "After decrement = " << --(*p) << endl;
    return 0;
}
