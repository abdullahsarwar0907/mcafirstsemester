// Problem 1. Write a C++ program to enter elements in the array
// and display the array elements.
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
       
    cout << "Array elements are: ";
    for(int i = 0; i < n; i++) {
    	cout << arr[i] << " ";
	}

    return 0;
}
