// Problem 6. Write a C++ program to concatenate two strings
// using pointers.
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1, s2, *p1, *p2, s3;
    cout << "Enter two strings: ";
    cin >> s1 >> s2;
    
    
    p1 = &s1;
    p2 = &s2;
    s3 = *p1 + *p2;
    cout << "Concatenated string = " << s3 << endl;
	return 0;   
}
