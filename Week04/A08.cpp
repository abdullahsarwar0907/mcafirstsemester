// Problem 8. Write a C++ program to check whether a given 3-digit number
// is an Armstrong number.
#include <iostream>
using namespace std;
int main() {
    int n, original, digit, sum = 0;
    cout << "Enter a 3-digit number: ";
    cin >> n;

    if (n < 100 || n > 999) {
        cout << "Please enter a 3-digit number.";
        return 0;
    }

    original = n;
    while (n > 0) {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n /= 10;
    }

    if (sum == original) {
    	cout << original << " is an Armstrong number.";
	} else {
    	cout << original << " is not an Armstrong number.";
	}
        
    return 0;
}
