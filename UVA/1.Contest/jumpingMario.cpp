#include <iostream> 

using namespace std;

int main() {
	int tc, wallNum = 0;
	int counter = 1;

	cin >> tc;
	while (tc--) {
		int highJ = 0;
		int lowJ = 0;
		cin >> wallNum;
		int walls[wallNum];

		for (int i = 0; i < wallNum; i++) {
			cin >> walls[i];
		}
		for (int j = 0; j < wallNum-1; j++) {
			if (walls[j] < walls[j + 1]) {
				highJ += 1;
			}
			else if (walls[j] > walls[j + 1]) {
				lowJ += 1;
			}
			else if(walls[j] == walls[j + 1]){
				continue;
			}

		}
		
		cout << "Case " << counter << ": " << highJ << " " << lowJ << endl;
		counter += 1;
	}
	return 0;
}