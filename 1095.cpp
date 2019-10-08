#include <iostream>

using namespace std;

int main(void)
{
	int n;
	int a[10001] = {};
	int min = 24;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		min = (min < a[i]) ? min : a[i];		
	}

	printf("%d\n", min);

	return 0;
}