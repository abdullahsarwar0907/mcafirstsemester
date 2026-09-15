// Problem 7. Write a C++ program to count and display positive,
// negative, odd, and even numbers in an array.
#include <iostream>
using namespace std;
int main() {
    int n, arr[100], pos = 0, neg = 0, odd = 0, even = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        
		if(arr[i] > 0) {
        	pos++;
		} else if(arr[i] < 0) {
        	neg++;
		}
		
        if(arr[i] % 2 == 0){
        	even++;
		} else {
        	odd++;
		}  
    }

    cout << "Positive numbers = " << pos << endl;
    cout << "Negative numbers = " << neg << endl;
    cout << "Odd numbers = " << odd << endl;
    cout << "Even numbers = " << even << endl;

    return 0;
}


