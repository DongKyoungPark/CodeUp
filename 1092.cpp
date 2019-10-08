#include <iostream>

using namespace std;

int main(void)
{
	int a, b, c;
	int day = 1;

	cin >> a >> b >> c;

	while (day % a != 0 || day % b != 0 || day % c != 0)
	{
		day++;
	}
	printf("%d\n", day);

	return 0;
}