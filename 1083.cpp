#include <iostream>

using namespace std;

int main(void)
{
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0)
			printf("%s ", "X");
		else
			printf("%d ", i);
	}
	return 0;
}