// Problem 6. A character is entered through keyboard. Write a C++ program
// to determine whether the character entered is a capital letter, a small
// case letter, a digit or a special symbol using if-else and switch case.
// The following table shows the range of ASCII values for various characters.
// Characters ASCII values:
// A-Z: 65-90, a-z: 97-122, 0-9: 48-57
// Special symbols: 0-47, 58-64, 91-96, 123-127
#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;
    int ascii = (int)c;
    
    cout << "If - else : ";
	if (ascii >= 65 && ascii <= 90) {
    	cout << "Capital letter";
	} else if (ascii >= 97 && ascii <= 122) {
		cout << "Small letter";
	} else if (ascii >= 48 && ascii <= 57) {
		cout << "Digit";
	} else {
		cout << "Special symbol";
	}
        
    cout << "\nSwitch : ";
    switch (ascii) {
        case 65 ... 90:
            cout << "Capital letter";
            break;
        case 97 ... 122:
            cout << "Small letter";
            break;
        case 48 ... 57:
            cout << "Digit";
            break;
        default:
            cout << "Special symbol";
    }
    
    return 0;
}

