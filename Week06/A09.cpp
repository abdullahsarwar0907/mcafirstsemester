// Problem 9. Write a program for reading elements using a pointer
// into the array and display the values using an array.
#include <iostream>
using namespace std;
int main() {
    int a[5], *p;
    cout << "Enter 5 elements: " << endl;
    p = &a[0];
    for (int i = 0; i < 5; i++) {
        cin >> *p;
        p++;
    }

    p = &a[0];
    cout << "Elements are: ";
    for (int i = 0; i < 5; i++) {
        cout << *p << " ";
        p++;
    }
	return 0;
}
