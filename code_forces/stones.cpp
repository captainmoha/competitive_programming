#include <iostream>

using namespace std;

int main() {
	unsigned int m, n, a;
	unsigned int stonesCount = 1;
	cin >> m >> n >> a;
	
	while ((a * a * stonesCount) < (m * n)){
		stonesCount ++;
	}
	if (stonesCount % 2 != 0 && stonesCount != 1) {
		stonesCount ++;
	}
	cout << stonesCount << endl;
	return 0;
}