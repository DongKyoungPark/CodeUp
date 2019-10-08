#include <iostream>

using namespace std;

int main(void)
{
	int a;
	int sum = 0;
	int count = 0;

	cin >> a;
	for (int i = 0; i <= a; i++)
	{
		if (sum < a)
		{
			count++;
			sum = sum + count;
		}
	}
	printf("%d\n", count);

	return 0;
}