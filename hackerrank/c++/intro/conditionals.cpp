#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;

    cin >> n;
    string output = (n>=1 && n <= 9) ? s[n-1] : "Greater than 9";
    cout << output << endl;
    return 0;
}
