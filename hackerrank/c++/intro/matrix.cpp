#include <iostream>
#include <vector>
#include "matrix.hpp"

typedef std::vector<std::vector<int>> mat;
typedef std::vector<int> vec;

using std::cin;
using std::cout;

Matrix::Matrix()
{

}

Matrix Matrix::operator+(const Matrix& b) 
{
	Matrix res;
	mat sum;
	mat aMat = this->matrix , bMat = b.matrix;

	for (int i = 0; i < aMat.size(); i++) {
		vec aVec = aMat.at(i);
		vec bVec = bMat.at(i);
		vec sumVec;

		for (int j = 0; j < aVec.size(); j++) {
			int sumElts = aVec.at(j) + bVec.at(j);
			sumVec.push_back(sumElts);
		}

		sum.push_back(sumVec);
	}

	res.matrix = sum;
	return res;
}

void Matrix::print()
{
	mat m = this->matrix;

	for (int i = 0; i < m.size(); i++) {

		for (int j = 0; j < m.size(); j++) {
			cout << m.at(i).at(j) << " ";
		}
		cout << "\n";
	}
}