//============================================================================
// Name        : ForLoop.cpp
// Author      : Sainath
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 10; ++i) {
		cout << "i is :" << i << endl;
		if (i == 3) {
			break; // Break will break all iterations after this point.
		}
		if (i == 2) {
			continue; // Continue will not execute the statements after countinue and executes the next iteration.
		}
		cout << "Looping.." << endl;
	}

	return 0;
}
