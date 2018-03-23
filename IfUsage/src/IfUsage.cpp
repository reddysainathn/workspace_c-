//============================================================================
// Name        : IfUsage.cpp
// Author      : Sainath
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string password = "hello";
	cout << "Enter your Password >" << flush; //

	string input;
	cin >> input;
	cout << "Input Entered :-" << input << endl;
	if (input == password) {
		cout << "Password Accepted!" << endl;
	}
	if (input != password) {
			cout << "Password Denied!" << endl;
	}
	return 0;
}
