#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
#include <map>

struct contestant
{	
	int id;
	int problems[9] = {0};
	int nSolved = 0;
	int penalty[9] = {0};
	int sumPenalty = 0;
};

typedef std::vector<std::string> stringV;
typedef std::vector<std::string>::iterator stringVIter;
typedef std::vector<contestant> contestantV;
typedef std::vector<contestant>::iterator contestantVIter;


using namespace std;


bool compare(const contestant& a, const contestant& b);
stringV splitStr(string s);

int main() {
	#ifndef ONLINE_JUDGE
		freopen("contest_scoreboard.in", "r", stdin);
		freopen("contest_scoreboard.out", "w", stdout);
	#endif

	

	int tc;
	cin >> tc;
	cin.ignore();
	cin.ignore();
	while (tc--) {

		contestantV scoreboard;
		while (1) {

			string input;
			getline(cin, input);

			if (input.length() == 0) {
				break;
			}


			stringV data = splitStr(input);
			int id = atoi(data.at(0).c_str());
			int problem = atoi(data.at(1).c_str());
			int penalty = atoi(data.at(2).c_str());
			string L = data.at(3);

			contestant current;

			// cout << scoreboard.size() << endl;
			if (scoreboard.size() == 0) {
				// cout << "here " << endl;
				current.id = id;
				if (L == "C") {

						current.nSolved += 1;
						current.problems[problem - 1] = 1;
						current.penalty[problem-1] += penalty;
						scoreboard.push_back(current);
					}

				else if (L == "I") {

					current.penalty[problem-1] += 20;
					scoreboard.push_back(current);
				}

				else {
					scoreboard.push_back(current);
				}
			}

			else {
				current.id = id;
				bool isThere = false;
				contestantVIter it;
				for(it = scoreboard.begin(); it != scoreboard.end(); it++) {
					if (it->id == id) {
						isThere = true;
						break;
					}
				}
				if (!isThere) {
					if (L == "C") {

						current.nSolved += 1;
						current.problems[problem - 1] = 1;
						current.penalty[problem-1] += penalty;
						scoreboard.push_back(current);
					}

					else if (L == "I") {

						current.penalty[problem-1] += 20;
						scoreboard.push_back(current);
					}

					else {
						scoreboard.push_back(current);
					}
				}

				else {
					if (L == "C") {
						if (it->problems[problem-1] == 0) {

							it->nSolved += 1;
							it->problems[problem - 1] = 1;
							it->penalty[problem-1] += penalty;
						}
						
					}

					else if (L == "I" && it->problems[problem-1] == 0) {

						it->penalty[problem-1] += 20;
					}
					// cout << "pe " << it->penalty << endl;
				} 
			}
		}
		
		for (contestantVIter it = scoreboard.begin(); it != scoreboard.end(); it++) {
			
			for (int c = 0; c < 9; c++) {
				if (it->problems[c] == 0) {
					it->penalty[c] = 0;
				}
			}

			int sumPenalty = std::accumulate(it->penalty, it->penalty + 9, 0);
			it->sumPenalty = sumPenalty;

		}
		sort(scoreboard.begin(), scoreboard.end(), compare);
		for (contestantVIter it = scoreboard.begin(); it != scoreboard.end(); it++) {
			
			cout << it->id << " " << it->nSolved << " " << it->sumPenalty << endl;
		}
		if (tc > 0) {
			cout << endl;
		}
		
	}
	return 0; 
}

stringV splitStr(string s) {
	stringV v;

	string delimiter = " ";

	int pos = 0;

	string token;

	while ((pos = s.find(delimiter)) != string::npos) {
		token = s.substr(0, pos);
		// cout << token << " ";
		v.push_back(token);
		s.erase(0, pos + delimiter.length());
	}
	// cout << s << endl;
	v.push_back(s);
	

	return v;
}

bool compare(const contestant& a, const contestant& b) {
	if(a.nSolved != b.nSolved) {
		return (a.nSolved > b.nSolved);
	}
	else if(a.sumPenalty != b.sumPenalty) {
		return (a.sumPenalty < b.sumPenalty);
	}

	else {
		return (a.id < b.id);
	}
}