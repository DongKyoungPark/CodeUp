#include <iostream>

using namespace std;

int main(void)
{
	int a = 1;

	while (a > 0 || a < 0)
	{
		cin >> a;
		if (a == 0)
			break;

		printf("%d\n", a);
	}

	return 0;
}