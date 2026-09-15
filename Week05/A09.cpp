// Problem 9. Write a C++ program to find the frequency of a
// particular number in a list of integers.
#include <iostream>
using namespace std;
int main() {
    int n, arr[100], t, c = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
    	cin >> arr[i];
	}
        
    cout << "Enter number to find frequency: ";
    cin >> t;
    for(int i = 0; i < n; i++) {
        if(arr[i] == t) {
        	c++;
		}     
    }
    cout << "Frequency of " << t << " = " << c;
    
	return 0;
}
