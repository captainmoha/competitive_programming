#include <iostream>
#include "over.hpp"

using namespace std;

over::over()
{

}

over::over(int a)
{
	num = a;
}

over over::operator+(over b) {
	over nb;
	nb.num = num + b.num;

	return(nb);
}