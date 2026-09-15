// Problem 8. Write a C++ program to merge two sorted arrays into
// another array in sorted order.
#include <iostream>
using namespace std;
int main() {
    int n, m;
    int A[100], B[100], C[200];

    cout << "Enter size of first array: ";
    cin >> n;
    cout << "Enter first sorted array: ";
    for(int i = 0; i < n; i++) {
    	cin >> A[i];
	}
        
    cout << "Enter size of second array: ";
    cin >> m;
    cout << "Enter second sorted array: ";
    for(int i = 0; i < m; i++) {
    	cin >> B[i];
	}

    int i = 0, j = 0, k = 0;
    while(i < n && j < m) {
        if(A[i] <= B[j]) {
        	C[k++] = A[i++];
		} else {
        	C[k++] = B[j++];
		}
    }
    while(i < n) {
    	C[k++] = A[i++];
	}
    while(j < m) {
    	C[k++] = B[j++];
	}

    cout << "Merged sorted array: ";
    for(int i = 0; i < k; i++) {
    	cout << C[i] << " ";
	}
        
    return 0;
}

