#include <iostream>
#include <vector>
using namespace std;

// template <typename T>


int main() {
	// int n;
	// cin >> n;
	// vector<int> v(n, 0);
	// for (int i = 0; i < n; i++) {
	// 	cout << v[i] << " "; 
	// }

	// vector props
	// vector<int> v(10);
	// int x;
	// cin >> x;
	// cout << endl << v.size() << endl;
	// cout << endl << v.capacity() << endl;

	// v.push_back(x);
	// for (int i = 0; i < v.size(); i++) {
		
	// 	cout << v[i] << " ";
	// }
	// cout << endl << v.capacity() << endl;

	vector<float> v(10);
	for (int j = 0; j < v.size(); j++) {
		cin >> v[j];
	}

	for (vector<float>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}

// T maxOf(T x, T y) {
// 	if (x >= y) {
// 		return x;
// 	}
// 	else {
// 		return y;
// 	}
// }