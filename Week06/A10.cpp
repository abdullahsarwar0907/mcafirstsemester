// Problem 10. Write a C++ program to reverse a string using pointers.
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s, *p, r = "";
	cout << "Enter a string: ";
    cin >> s;
    
    p = &s;
    int i = s.length() - 1;
    while (i >= 0)
    {
        r += (*p)[i];
        i--;
    }

    cout << "Original: " << s << endl;
    cout << "Reverse: " << r << endl;
    return 0;
}
