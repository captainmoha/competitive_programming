#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stdio.h>

typedef long long ll;
typedef std::vector<ll> llVec;


using namespace std;

bool compare(ll& x, ll& y);
ll getPower(ll base, ll expo);

int main() {

	#ifndef ONLINE_JUDGE
		freopen("minLandPrice.in", "r", stdin);
		freopen("minLandPrice.out", "w", stdout);
	#endif

	int tc;
	cin >> tc;

	while (tc--) {
		llVec  prices;
		ll minCost = 0;

		while (true) {
			int price;
			cin >> price;

			if (price == 0) {
				break;
			}

			prices.push_back(price);
		}
		sort(prices.begin(), prices.end(), compare);
		for (int i = 0; i < prices.size(); i++) {
			minCost += 2 * getPower(prices.at(i), i + 1);
		}
		if (minCost <= 5000000) {
			cout << minCost << endl;
		}

		else {
			cout << "Too expensive" << endl;
		}
	}
}

bool compare(ll& x, ll& y) {
	if (x > y) {
		return true;
	}
	else {
		return false;
	}
}

ll getPower(ll base, ll expo) {

	if (expo == 0) {
		return 1;
	}
	
	ll power = 1;

	while(expo--) {
		power *= base;
	}

	return power;
}