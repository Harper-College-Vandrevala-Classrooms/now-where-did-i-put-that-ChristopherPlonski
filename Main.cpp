#include <iostream>
#include <cassert>
#include "StringFinder.hpp"

using namespace std;

void tests() {
	cout << "-- Starting tests." << endl;

	StringFinder stringFinder = StringFinder();
	// "The quick brown fox" length = 19;

	assert(stringFinder.find_in_string("The quick brown fox", 'e') == 2);
	assert(stringFinder.find_in_string("The quick brown fox", "e") == 2);
	assert(stringFinder.find_in_string("The quick brown fox", ' ') == 3);
	assert(stringFinder.find_in_string("The quick brown fox", "") == 0);
	assert(stringFinder.find_in_string(" The quick brown fox", "") == 0);
	assert(stringFinder.find_in_string(" The quick brown fox", " ") == 0);
	assert(stringFinder.find_in_string("The quick brown fox", " ") == 3);
	assert(stringFinder.find_in_string("Computers", " ") == -1);
	assert(stringFinder.find_in_string("Computers", "put") == 3);
	assert(stringFinder.find_in_string("Computers", "Put") == -1);
	assert(stringFinder.find_in_string("Computers", 's') == 8);
	assert(stringFinder.find_in_string("Computers", 'C') == 0);
	assert(stringFinder.find_in_string("Computers", "s") == 8);
	assert(stringFinder.find_in_string("Computers", "C") == 0);
	assert(stringFinder.find_in_string("Computers", "Computers") == 0);
	assert(stringFinder.find_in_string("Computers", "omputers") == 1);
	assert(stringFinder.find_in_string("Hello World!", "!") == 11);
	assert(stringFinder.find_in_string("Hello World!", "aekgewjgegpoj32j4g23o4gjo23gjg5525442h") == -1);
	assert(stringFinder.find_in_string("Hello World!", "Hello World! ") == -1);
	assert(stringFinder.find_in_string("Hello World!", " Hello World!") == -1);

	cout << "-- Tests successfully completed!" << endl;
}

int main() {

	tests();

	return 0;
}