#include <iostream>

using namespace std;

int main(void)
{
	int a;
	cin >> a;

	if (a % 2 == 0)
	{
		if (a < 0)
			printf("%s\n", "minus");
		else
			printf("%s\n", "plus");
		
		printf("%s\n", "even");
	}
	else
	{
		if (a < 0)
			printf("%s\n", "minus");
		else
			printf("%s\n", "plus");

		printf("%s\n", "odd");
	}

	return 0;
}