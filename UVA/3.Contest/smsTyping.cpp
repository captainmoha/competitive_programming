#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
#include <map>

typedef std::map<char, int> mci;
typedef std::map<char, int>::iterator mciIter;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("smsTyping.in", "r", stdin);
		freopen("smsTyping.out", "w", stdout);
	#endif
	mci keypad;
	mciIter it;

	// abc
	keypad['a'] = 1;
	keypad['b'] = 2;
	keypad['c'] = 3;

	keypad['d'] = 1;
	keypad['e'] = 2;
	keypad['f'] = 3;

	keypad['g'] = 1;
	keypad['h'] = 2;
	keypad['i'] = 3;

	keypad['j'] = 1;
	keypad['k'] = 2;
	keypad['l'] = 3;


	keypad['m'] = 1;
	keypad['n'] = 2;
	keypad['o'] = 3;


	keypad['p'] = 1;
	keypad['q'] = 2;
	keypad['r'] = 3;
	keypad['s'] = 4;

	keypad['t'] = 1;
	keypad['u'] = 2;
	keypad['v'] = 3;

	keypad['w'] = 1;
	keypad['x'] = 2;
	keypad['y'] = 3;
	keypad['z'] = 4;


	keypad[' '] = 1;


	int tc;
	std::cin >> tc;
	std::cin.ignore();
	std::string input;
	int counter = 1;
	while (tc--) {
		int keyPresses = 0;
		std::getline(std::cin, input);

		for (int i = 0; i < input.length(); i++) {
			it = keypad.find(input[i]);
			keyPresses += it->second;
		}

		std::cout << "Case #" << counter << ": " << keyPresses << std::endl;
		counter++; 
	}
	return 0; 
}
