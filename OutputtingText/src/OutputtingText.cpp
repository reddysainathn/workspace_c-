#include <iostream> // Input Output Stream
//Include refers to taking another file and putting it inside this file before build runs.

using namespace std;

int main(int argc, char **argv) {
	cout << "Starting Program!" << flush;
	cout << "This is some text." << endl;
	// To output text, use cout and endl(Endler) used for end line.
	// Flush will wnot goto next line.(No endl)
	cout << "Apple.  " << "Banana.  " << "Cherry.  " << endl;
	cout << "This is some more Text." << endl;
	return 0;
}
