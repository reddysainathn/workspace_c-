//============================================================================
// Name        : ComparingFloatingPointNumbers.cpp
// Author      : Sainath
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;
// Precision differs a lot in Floating Point.
int main() {
	float value1 = 1.1;
	if (value1 == 1.11) {
		cout << "equals" << endl;
	} else {
		cout << "Not Equals" << endl;
	}
	return 0;
}
