#include <iostream>

using namespace std;

int main(void)
{
	int n;
	int result = 0;

	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		result += i;
		if (result >= n)
			break;
	}
	printf("%d\n", result);

	return 0;
}