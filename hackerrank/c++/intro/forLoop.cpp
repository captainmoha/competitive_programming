#include <iostream>
#include <string>
using namespace std;

bool isEven(int n);

int main() {
    
    string s[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n1, n2;
    cin >> n1 >> n2;
 	

 	for (int i = n1; i <= n2; i++) {
 		if (i >= 1 && i <= 9) {
 			cout << s[i-1] << endl;
 		}
 		else {
 			string nType = isEven(i) ? "even" : "odd";
 			cout << nType << endl;
 		}	
 	}
 	 
    return 0;
}

bool isEven(int n) {
	return (n%2 == 0);
}
