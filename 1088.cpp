#include <iostream>

using namespace std;

int main(void)
{
	int n;

	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		if (i % 3 == 0)
			continue;
		printf("%d ", i);
	}

	return 0;
}