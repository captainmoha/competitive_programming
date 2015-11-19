#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<float> v(10);
	for (int j = 0; j < v.size(); j++) {
		cin >> v[j];
	}
	sort(v.begin(),v.end());
	for (vector<float>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}
