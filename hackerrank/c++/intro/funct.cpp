#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d) {

	int arr[4];
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	arr[3] = d;

	int max = a;
	for (int i = 1; i < 4; ++i)
	{
		if (arr[i] > max) max = arr[i];
	}

	return max;

}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

