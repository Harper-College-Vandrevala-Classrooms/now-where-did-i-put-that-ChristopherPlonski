#include <iostream>

using namespace std;

class StringFinder {

public :
	int find_in_string(const string baseString, char charToFindInString, int startingPosition = 0);
	int find_in_string(const string baseString, string stringToFindInString, int startingPosition = 0);

};