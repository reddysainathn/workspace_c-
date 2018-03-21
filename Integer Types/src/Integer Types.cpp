//============================================================================
// Name        : Integer.cpp
// Author      : Sainath
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <limits.h>
using namespace std;

int main() {
	int value = 7;

	cout << value << endl;

	cout << "Int Max Value:" << INT_MAX << endl;
	cout << "Int Min Value:" << INT_MIN << endl;

	long int lValue = 89234839439493943;
	cout << "Large Value :" << lValue << endl;

	short int sValue = 89;
	cout << "Short Value :" << sValue << endl;
	cout << "Size of int :" << sizeof(int) << endl;
	cout << "Size of short int :" << sizeof(short int) << endl;
	cout << "Size of long int :" << sizeof(long int) << endl;
	//Refer limits.h for all limits.

	unsigned int unsignedValue = 234564;
	std::cout << "Size of unsigned int :" << sizeof(unsigned int) << std::endl;
	return 0;
}
