#include <iostream>

using namespace std;

int main(void)
{
	int n, t;
	int a[24] = {};

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> t;
		a[t] = a[t] + 1;
	}

	for (int i = 1; i <= 23; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}