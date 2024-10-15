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
	assert(stringFinder.find_in_string("Hello World!", '!') == 11);
	assert(stringFinder.find_in_string("Hello World!", "aekgewjgegpoj32j4g23o4gjo23gjg5525442h") == -1);
	assert(stringFinder.find_in_string("Hello World!", "Hello World! ") == -1);
	assert(stringFinder.find_in_string("Hello World!", " Hello World!") == -1);

	// Tests for Add-on #2 (starting position)
	assert(stringFinder.find_in_string("The quick brown fox", 'e', 0) == 2);
	assert(stringFinder.find_in_string("The quick brown fox", 'E', 0) == -1);
	assert(stringFinder.find_in_string("The quick brown fox", 'e', 1) == 2);
	assert(stringFinder.find_in_string("The quick brown fox", 'e', 2) == 2);
	assert(stringFinder.find_in_string("The quick brown fox", 'e', 3) == -1);
	assert(stringFinder.find_in_string("The", 'e', 100) == -1);
	assert(stringFinder.find_in_string("The", 'b', 101) == -1);
	assert(stringFinder.find_in_string("e", 'e', 100) == -1);
	assert(stringFinder.find_in_string("e", 'b', 101) == -1);
	assert(stringFinder.find_in_string("The quick brown fox", "quick", 0) == 4);
	assert(stringFinder.find_in_string("The quick brown fox", "QUICK", 0) == -1);
	assert(stringFinder.find_in_string("The quick brown fox", "quick", 1) == 4);
	assert(stringFinder.find_in_string("The quick brown fox", "quick", 2) == 4);
	assert(stringFinder.find_in_string("The quick brown fox", "quick", 3) == 4);
	assert(stringFinder.find_in_string("The quick brown fox", "quick", 4) == 4);
	assert(stringFinder.find_in_string("The quick brown fox", "quick", 5) == -1);
	assert(stringFinder.find_in_string("The", "quick", 100) == -1);
	assert(stringFinder.find_in_string("The", "quick", 101) == -1);
	assert(stringFinder.find_in_string("QUICK", "the", 101) == -1);
	assert(stringFinder.find_in_string("QUICK", "the", 101) == -1);

	cout << "-- Tests successfully completed!" << endl;
}

int main() {

	tests();

	return 0;
}