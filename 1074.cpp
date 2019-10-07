#include <iostream>

using namespace std;

int main(void)
{
	int n = 1;

	cin >> n;
	while (n >= 1 || n <= 100)
	{
		printf("%d\n", n);
		n -= 1;

		if (n == 0)
			break;
	}

	return 0;
}