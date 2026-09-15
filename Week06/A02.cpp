// Problem 2. Write a C++ Example Program for swapping numbers
// Using Pointers.
#include <iostream>
using namespace std;
int main() {
   	int a, b, *p1, *p2, t;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    p1 = &a;
    p2 = &b;

    cout << "Before swapping: a = " << a <<", b = " << b << endl;
    t = *p1;
    *p1 = *p2;
    *p2 = t;
    cout << "After swapping: a = " << a <<", b = " << b << endl;
	return 0;
}
