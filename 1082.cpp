#include <iostream>

using namespace std;

int main(void)
{
	int n;
	int sum;

	scanf_s("%X", &n);

	for (int i = n; i < n+1; i++)
	{
		for (int j = 1; j < 16; j++)
		{
			sum = i * j;
			printf("%X*%X=%X\n", i, j, sum);
		}
	}

	return 0;
}