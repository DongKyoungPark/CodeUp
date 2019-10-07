#include <iostream>

using namespace std;

int main(void)
{
	int a;
	int b;

	cin >> b;

	while (b > 0 || b < 0)
	{
		cin >> a;
		--b;
		printf("%d\n", a);

		if (b == 0)
			break;
	}

	return 0;
}