#include <iostream>

using namespace std;

int main(void)
{
	int n = 1;

	while (n != 0)
	{
		cin >> n;
		if (n == 0)
			break;

		printf("%d\n", n);
	}

	return 0;
}