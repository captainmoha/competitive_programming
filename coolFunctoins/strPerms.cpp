#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

typedef vector<int> intVec;


intVec getPerms(string s);

int main() {

	return 0;
}

intVec getPerms(string s) {
	intVec perms;

	do {
		perms.push_back(atoi(s.c_str()));
	}

	while (next_permutation(s.begin(), s.end()));

	return perms;
}
