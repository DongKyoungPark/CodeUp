#include <iostream>

using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a % 2 == 0)
		printf("%d\n", a);
	if (b % 2 == 0)
		printf("%d\n", b);
	if (c % 2 == 0)
		printf("%d\n", c);	

	return 0;
}