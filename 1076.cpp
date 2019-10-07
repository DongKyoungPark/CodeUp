#include <iostream>

using namespace std;

int main(void)
{
	char a = 'a';
	char b;

	cin >> b;

	while (a != b)
	{
		printf("%c\n", a);
		a += 1;

		if (a == b)
			break;
	}
	printf("%c\n", b);

	return 0;
}