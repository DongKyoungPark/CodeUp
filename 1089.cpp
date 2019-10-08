#include <iostream>

using namespace std;

int main(void)
{
	int a, d, n;

	cin >> a >> d >> n;

	for (int i = 1; i <= n - 1; i++)
	{
		a += d;
	}
	printf("%d\n", a);

	return 0;
}