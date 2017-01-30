#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int strips[4];
	string game;

	int nCalories = 0;

	for (int i = 0; i < 4; i++) {
		cin >> strips[i];
	}
	cin >> game;

	for (int i = 0; i < game.size(); i++) {
		nCalories += strips[(game[i] - '0' - 1)];
	}

	cout << nCalories << endl;
}
