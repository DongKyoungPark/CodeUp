#include <iostream>

using namespace std;

int main(void)
{
	int n = 1;

	cin >> n;
	while (n >= 1 || n <= 100)
	{
		n -= 1;
		printf("%d\n", n);

		if (n == 0)
			break;
	}

	return 0;
}