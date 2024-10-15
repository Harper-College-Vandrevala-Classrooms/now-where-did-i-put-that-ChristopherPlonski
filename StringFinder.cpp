#include <iostream>
#include "StringFinder.hpp"

using namespace std;

/// <summary>
/// Attempts to find the character in the string. Returns the index of the character if it is found, and -1 if otherwise. 
/// </summary>
int StringFinder::find_in_string(const string baseString, const char charToFindInString, int startingPosition)
{
	const int BASE_STRING_LENGTH = baseString.length();

	cout << "Starting check of baseString: " << baseString << " with length: " << BASE_STRING_LENGTH << " with charToFindInString: " << charToFindInString << endl;

	for (int i = startingPosition; i < BASE_STRING_LENGTH; i++) {
		char charAtIndex = baseString[i];

		cout << "Checking char: " << charAtIndex << endl;

		if (charAtIndex == charToFindInString) {
			cout << "character: '" << charAtIndex << "' at index: " << i << " matches charToFindInString: '" << charToFindInString << "' ." << endl;
			return i;
		}
	}

	return -1;
}

int StringFinder::find_in_string(const string baseString, const string stringToFindInString, int startingPosition)
{
	// "bobby" -> find "by." Checks 0 (b), 1 (o), 2(b), and 3(b). No need to go past this, so check string.length - stringToFindInString.length + 1
	// Notes: EMPTY string "" should return index 0 as string.find() method does.

	if (stringToFindInString == "") {
		return 0;
	}

	const int BASE_STRING_LENGTH = baseString.length();
	const int STRING_TO_FIND_IN_STRING_LENGTH = stringToFindInString.length();
	
	cout << "Starting check of baseString: " << baseString << " with length: " << BASE_STRING_LENGTH << " with stringToFind: " << stringToFindInString << " with length: " << STRING_TO_FIND_IN_STRING_LENGTH << endl;
	for (int i = startingPosition; i < BASE_STRING_LENGTH - STRING_TO_FIND_IN_STRING_LENGTH + 1; i++) {
		char charAtIndex = baseString[i];

		cout << "Checking char: '" << charAtIndex << "' at index: " << i << endl;

		if (charAtIndex == stringToFindInString[0]) {
			// Potentially match?
			string substringAtIndex = baseString.substr(i, STRING_TO_FIND_IN_STRING_LENGTH);

			cout << "Checking substring: \"" << substringAtIndex << "\" equal to \"" << stringToFindInString << "\" at index " << i << " ?" << endl;

			if (substringAtIndex == stringToFindInString) {
				cout << "Yes." << endl;
				return i;
			}
		}
	}

	return -1;
}
