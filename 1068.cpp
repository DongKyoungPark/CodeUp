#include <iostream>

using namespace std;

int main(void)
{
	int a;
	cin >> a;

	if (a > 101 || a < 0)
		return false;

	if (a >= 90 && a <= 100)
		printf("%s", "A");
	else if (a >= 70 && a <= 89)
		printf("%s", "B");
	else if (a >= 40 && a <= 69)
		printf("%s", "C");
	else
		printf("%s", "D");	

	return 0;
}