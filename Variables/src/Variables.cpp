//============================================================================
// Name        : Variables.cpp
// Author      : Sainath
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	//Integers
	int numberCats = 5;
	int numberDogs = 6;

	cout << "Number of cats :" << numberCats << endl;
	cout << "Number of Dogs :" << numberDogs << endl;
	cout << "Total Animals :" << numberDogs + numberCats << endl;
	cout << "New Dog Acquired!" << endl;
	numberDogs = numberDogs + 1;
	cout << "New Number of Dogs :" << numberDogs << endl;

	//Strings
	string text1 = "Hello ";
	string text2 = "Me";
	string text3 = text1 + text2;

	cout << text1 << text2 << endl;
	cout << text3 << endl;

	return 0;
}
