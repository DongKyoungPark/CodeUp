#include <iostream>

using namespace std;

int main(void)
{
	int a = 0;
	int b;

	cin >> b;

	while (a != b)
	{
		printf("%d\n", a);
		a += 1;

		if (a == b)
			break;
	}
	printf("%d\n", b);

	return 0;
}