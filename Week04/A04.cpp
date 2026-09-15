// Problem 4. A Fibonacci sequence is defined as follows: The first and
// second terms in the sequence are 0 and 1. Subsequent terms are found by
// adding the preceding two terms in the sequence. Write a C++ program to
// generate the first n terms of the sequence.
#include <iostream>
using namespace std;
int main() {
    int first = 0, second = 1, n, next;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Sequence: ";
    for (int i = 1; i <= n; i++) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
