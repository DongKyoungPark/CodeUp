#include <iostream>

using namespace std;

int main(void)
{
	double h, b, c, s;
	double result = 0;

	cin >> h >> b >> c >> s;

	result = (h * b * c * s);
	
	printf("%.1lf MB", result/(8*1024*1024));

	return 0;
}