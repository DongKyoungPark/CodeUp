#include <iostream>

using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a % 2 == 0)
		printf("%s\n", "even");
	else
		printf("%s\n", "odd");

	if (b % 2 == 0)
		printf("%s\n", "even");
	else
		printf("%s\n", "odd");

	if (c % 2 == 0)
		printf("%s\n", "even");
	else
		printf("%s\n", "odd");

	return 0;
}