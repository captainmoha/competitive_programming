#include <iostream>
#include "over.hpp"

using namespace std;

int main() {

	over a(32);
	over b(99);
	over c;

	c = a + b;

	cout << c.num << endl;
}