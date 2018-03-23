//============================================================================
// Name        : IfElseUsage.cpp
// Author      : Sainath
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
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

	cout << "1. \tAdd new record." << endl;
	cout << "2. \tDelete record." << endl;
	cout << "3. \tView new record." << endl;
	cout << "4. \tSearch new record." << endl;
	cout << "5. \tQuit." << endl;

	cout << "Enter your selection>" << flush;
	int value;
	cin >> value;
	if (value == 5) {
		cout << "Application Quitting." << endl;
	} else if (value < 3) {
		cout << "Insufficient privileges to use these menu option." << endl;
	} else {
		cout << "Sufficient privileges." << endl;
	}
	return 0;
}
