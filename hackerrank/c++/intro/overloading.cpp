#include <iostream>
#include <vector>
#include "matrix.hpp"

using std::cin;

typedef std::vector<std::vector<int>> mat;
typedef std::vector<int> vec;

mat readMatrix(int M, int N);

int main() {

	int tc;
	cin >> tc;

	while(tc--) {
		int m, n;
		cin >> m >> n;

		Matrix A, B, Res;
		A.matrix = readMatrix(m, n);
		B.matrix = readMatrix(m, n);

		Res = A + B;

		Res.print();
	}


	return 0;
}

mat readMatrix(int M, int N) {

	mat res;

	for (int i = 0; i < M; i++) {
		vec tempVec; 

		for (int j = 0; j < N; j++) {
			int temp;
			cin >> temp;
			tempVec.push_back(temp);
		}
		res.push_back(tempVec);
	}

	return res;
}