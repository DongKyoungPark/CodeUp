#include <iostream>

using namespace std;

int main(void)
{
	int a;
	int sum = 0;

	cin >> a;
	for (int i = 0; i <= a; i++)
	{
		if (i % 2 == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return 0;
}