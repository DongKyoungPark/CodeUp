#include <iostream>

using namespace std;

int main(void)
{
	char a='a';
	
	while (a != 'q')
	{
		cin >> a;
		printf("%c\n", a);

		if (a == 'q')
			break;
	}

	return 0;
}