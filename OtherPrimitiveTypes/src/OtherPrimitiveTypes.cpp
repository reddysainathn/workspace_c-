//============================================================================
// Name        : OtherPrimitiveTypes.cpp
// Author      : Sainath
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	bool bValue = false;
	cout << bValue << endl;

	char cValue = 55; //Char uses 1 byte of memory. And it takes ASCII value not the actual value.
	cout << cValue << endl;

	char cValue1 = '7'; // Value in quotes will print the same value not ASCII.
	cout << cValue << endl;
	cout << (int) cValue << endl; // Prints ASCII of value in quotes
	cout << "Size of char:" << sizeof(char) << endl;

	wchar_t wValue = 'i';
	cout << wValue << endl;
	cout << (char) wValue << endl;
	cout << "Size of wchar_t:" << sizeof(wchar_t) << endl;
	return 0;
}
