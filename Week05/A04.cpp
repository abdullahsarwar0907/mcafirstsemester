// Problem 4. Write a C++ program to find the second-largest integer
// in a list of integers.
#include <iostream>
using namespace std;
int main() {
    int n, arr[100], fl = INT_MIN, sl = INT_MIN;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
    	cin >> arr[i];
	}

    for(int i = 0; i < n; i++) {
        if(arr[i] > fl) {
            sl = fl;
            fl = arr[i];
        } else if(arr[i] > sl && arr[i] < fl) {
            sl = arr[i];
        }
    }
    cout << "Second largest = " << sl;

    return 0;
}

