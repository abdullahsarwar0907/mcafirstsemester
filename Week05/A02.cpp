// Problem 2. Write a C++ program to find the sum of all the
// array elements.
#include <iostream>
using namespace std;
int main() {
    int n, arr[100], sum = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum = " << sum;

    return 0;
}
