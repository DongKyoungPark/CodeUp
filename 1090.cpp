#include <iostream>

using namespace std;

int main(void)
{
	int a, r, n;

	cin >> a >> r >> n;

	for (int i = 1; i <= n - 1; i++)
	{
		a *= r;
	}
	printf("%d\n", a);

	return 0;
}