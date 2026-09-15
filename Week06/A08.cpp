// Problem 8. Write a program using a pointer variable to the sum
// of n elements from the array.
#include <iostream>
using namespace std;
int main() {
    int a[5], *p, s = 0;
	cout << "Enter 5 elements: " << endl;
    p = &a[0];
    for (int i = 0; i < 5; i++) {
        cin >> *p;
        p++;
    }

    p = &a[0];
    for (int i = 0; i < 5; i++) {
        s = s + *p;
        p++;
    }
    cout << "Sum of array elements = " << s << endl;
	return 0;
}
