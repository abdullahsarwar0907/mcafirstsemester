// Problem 3. Write a C++ program to find the length of the array.
#include <iostream>
using namespace std;
int main() {
    int n, arr[100];
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
    	cin >> arr[i];
	}
    cout << "Length of array = " << n;

    return 0;
}
