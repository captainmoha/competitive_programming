#include <iostream>

using namespace std;

int main() {
   	int height, nFriends;

   	cin >> nFriends >> height;
   	int friends[nFriends];

   	int minWidth = 0;

   	for (int i = 0; i < nFriends; i++) {
   		cin >> friends[i];
   		if (friends[i] > height) {
   			minWidth += 2;
   		}
   		else {
   			minWidth += 1;
   		}
   	}
    
    cout << minWidth << endl;
    return 0;
}
