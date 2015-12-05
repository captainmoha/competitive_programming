#include <iostream>
#include <string>
#include <map>

typedef std::map<char, int> chIntMap;
typedef std::map<char, int>::iterator chIntMapIter;

using namespace std;

int main() {

	string input = "";

	chIntMap alphabet;

	// fill the map with letters from a to z as keys and 0 as values
	for (int j = 0; j < 26; j++) {
		alphabet[char(j+97)] = 0;
	}

	// cout << "Enter the string that you want to check \n";
	getline(cin, input);


	// go through the input string
	for (int i = 0; i < input.length(); i++) {
		// go through the map
		for (chIntMapIter it = alphabet.begin(); it != alphabet.end(); it++) {
			
			if (tolower(input[i]) == it->first) {

				// increment the value of that pair that has a key corresponding to the current char

				it->second += 1;
				break;
			}
		}
	}

	// go through the dictionary an make sure all letters have a value greater than 0
	for (chIntMapIter it = alphabet.begin(); it != alphabet.end(); it++) {
		// cout << it->first << " " << it->second << endl;
		if (it->second < 1) {
			cout << "not pangram\n";
			return 0;
		}
	}
	cout << "pangram\n";
	
	return 0;	
}

