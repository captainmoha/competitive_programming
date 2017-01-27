#include <iostream>
#include <string>


using namespace std;


int main(void) {

	string a, b;

	cin >> a >> b;

	cout << a.size() << " " << b.size() << endl;
	cout << a + b << endl;

	string a2 = a, b2 = b;

	a2[0] = b[0];
	b2[0] = a[0];

	cout << a2 << " " << b2 << endl;


	return 0;
}