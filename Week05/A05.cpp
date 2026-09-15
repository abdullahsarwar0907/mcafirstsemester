// Problem 5. Write a C++ Program to reverse the position of the
// array element (Hint: First element to the last element.)
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
	
    int s = 0, e = n - 1; 
	while (s < e) { 
		swap(arr[s++], arr[e--]); 
	} 
	
	cout << "Reversed array: ";
    for(int i = 0; i < n; i++) {
    	cout << arr[i] << " ";
	}

    return 0;
}
