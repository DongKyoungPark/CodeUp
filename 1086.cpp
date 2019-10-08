#include <iostream>

using namespace std;

int main(void)
{
	int w, h;
	int b;
	double result = 0;

	cin >> w >> h >> b;

	result = w * h * b;

	printf("%.2lf MB", result / (8 * 1024 * 1024));

	return 0;
}