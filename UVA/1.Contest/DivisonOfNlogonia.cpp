#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main ()
{

 #ifndef ONLINE_JUDGE
 	freopen("DivisionOfNlogonia.txt", "r", stdin);
 #endif
 string zones[5] = {"divisa", "NE", "NO", "SE", "SO"};
 char c;

 while (true) {
 	int queries = 0;
 	int divPnt[2] = {0};
 	int coords[2] = {0};

 	cin >> queries;

 	if (queries == 0) {
 		break;
 	}

 	cin >> divPnt[0];
 	cin >> divPnt[1];
 	while(queries--) {
 		cin >> coords[0];
 		cin >> coords[1];
 		if (coords[0] == divPnt[0] || coords[1] == divPnt[1]) {
 			cout << zones[0] << endl;
 		}

 		else if (coords[0] > divPnt[0] && coords[1] > divPnt[1]) {
 			cout << zones[1] << endl;
 		}

 		else if (coords[0] > divPnt[0] && coords[1] < divPnt[1]) {
 			cout << zones[3] << endl;
 		}

 		else if (coords[0] < divPnt[0] && coords[1] < divPnt[1]) {
 			cout << zones[4] << endl;
 		}
 		else if (coords[0] < divPnt[0] && coords[1] > divPnt[1]) {
 			cout << zones[2] << endl;
 		}
 	}

 }

  return 0;
}