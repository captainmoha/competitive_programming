typedef std::vector<std::vector<int>> mat;

class Matrix {

public:
	mat matrix;

	Matrix();
	// Matrix(mat);
	Matrix operator+(const Matrix&);
	void print();
};
