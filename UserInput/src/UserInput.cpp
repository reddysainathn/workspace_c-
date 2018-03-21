//============================================================================
// Name        : UserInput.cpp
// Author      : Sainath
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter Input:" << flush;
	string input;
	cin >> input;
	cout << "You Entered Input :" << input << endl;

	cout << "Enter Value:" << flush;
	int value;
	cin >> value;
	cout << "You Entered Value :" << value << endl;
	return 0;
}
