#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
#include <map>

typedef std::vector<long long> iVec;

class compare {
	private:
		long long mod;

	public:
		compare(long long m) {
			mod = m;
		}

		bool operator () (const long long& a, const long long& b) {
			if(a%mod == b%mod)
    			{
			        int x,y;
			        x = abs(a)%2;
			        y = abs(b)%2;

			        if(x==0 && y==1) {
			        	return 0;
			        }
			            
			        if(x==1 && y==0) {
			        	return 1;
			        }
			           
			        if(x==0 && y==0) {
			        	return (a < b);
			        }
			            
			        if(x ==1 && y==1) {
			        	return (b < a);
			        }
			            
    			}
   		 	return (a%mod < b%mod);
		}
	
};

using namespace std;



int main() {
	#ifndef ONLINE_JUDGE
		freopen("sortSortSort.in", "r", stdin);
		freopen("sortSortSort.out", "w", stdout);
	#endif

	

	
	while (true) {
		iVec set;
		long long n, mod;

		cin >> n >> mod;

		cout << n << " " << mod << endl;
		
		if (n == 0 && mod == 0) {
			break;
		}

		while(n--) {
			
			long long current;
			cin >> current;
			set.push_back(current);
		}
		sort(set.begin(), set.end(), compare(mod));

		for (int i = 0; i < set.size(); i++) {
			cout << set.at(i) << endl;
		}
	}
	
	return 0; 
}

