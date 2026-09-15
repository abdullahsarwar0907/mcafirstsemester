// Problem 1. Write a C++ Program to Add Two Numbers Using a Pointer.
#include <iostream>
using namespace std;
int main() {
    int a, b, *p1, *p2, s;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    p1 = &a;
    p2 = &b;
    s = *p1 + *p2;
    cout << "Sum = " << s << endl;
	return 0;
}
