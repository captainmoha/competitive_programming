#include <iostream> 
#include <stdio.h>
#include <string.h>

using namespace std;

string detectLang(string language);

int main(){

	#ifndef ONLINE_JUDGE
		freopen("languageDetectionTest.txt", "r", stdin);
	#endif

	int counter = 1;
	char c;
	string xHello, language;
	while (true) {
		getline(cin, xHello);
		if (xHello.compare("#") == 0) {
			break;
		}

		language = detectLang(xHello);
		cout <<"Case " << counter << ": "<< language << endl;
		counter++;		
	}
	return 0;
}

string detectLang(string xHello) {

	if (xHello.compare("HELLO") == 0) {
		return "ENGLISH";
	}

	else if (xHello.compare("HOLA") == 0) {
		return "SPANISH";
	}

	else if (xHello.compare("HALLO") == 0) {
		return "GERMAN";
	}

	else if (xHello.compare("BONJOUR") == 0) {
		return "FRENCH";
	}
	else if (xHello.compare("CIAO") == 0) {
		return "ITALIAN";
	}

	else if (xHello.compare("ZDRAVSTVUJTE") == 0) {
		return "RUSSIAN";
	}

	else {
		return "UNKNOWN";
	}
 
	
}