#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main ()
{

 #ifndef ONLINE_JUDGE
 	freopen("oneTwoThreeTest.txt", "r", stdin);
 #endif

string nums[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
int digits[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int tc;
cin >> tc;
cin.ignore();
 while (tc--) {
 	string input;
 	
 	getline(cin, input);
 	for (int i = 0; i < 10; i++) {
 		int similar = 0;
 		string currentNum = nums[i];
 		for (int j = 0; j < currentNum.length(); j++) {
 			if (currentNum[j] == input[j]) {
 				similar++;
 			}
 		}
 		if (similar >= (currentNum.length() - 1) && currentNum.length() == input.length()) {
 			cout << digits[i] << endl;
 		}
 	}
 }
 	

  return 0;
}