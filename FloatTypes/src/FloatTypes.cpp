//============================================================================
// Name        : FloatTypes.cpp
// Author      : Sainath
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip> //Input -Output Manipulation.
using namespace std;

int main() {
	float fValue = 55.67;
	cout << " Size of Float:" << sizeof(float) << endl;
	cout << fixed << fValue << endl; // prints Fixed value of Float Number
	cout << setprecision(20) << fixed << fValue << endl; // prints Fixed value of Float Number
	cout << scientific << fValue << endl; // prints Scientific value of Float Number

	// more decimal places can be used, better than Float.
	double dValue = 55.67;
	cout << " Size of Float:" << sizeof(double) << endl;
	cout << dValue << endl;

	long double ldValue = 778.9999964;
	cout << ldValue << endl;
	cout << " Size of long double:" << sizeof(long double) << endl;
	cout << setprecision(20) << fixed << ldValue << endl;
	return 0;
}
