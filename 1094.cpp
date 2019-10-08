#include <iostream>

using namespace std;

int main(void)
{
	int n;
	int a[10001] = {};

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = n - 1; i >= 0; i--)
	{
		cout << a[i] << ' ';
	}

	return 0;
}