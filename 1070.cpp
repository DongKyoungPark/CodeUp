#include <iostream>

using namespace std;

int main(void)
{
	int a;
	cin >> a;

	switch (a)
	{
	case 12:
	case 1:
	case 2:
		printf("%s\n", "winter");
		break;
	case 3:
	case 4:
	case 5:
		printf("%s\n", "spring");
		break;
	case 6:
	case 7:
	case 8:
		printf("%s\n", "summer");
		break;
	default:
		printf("%s\n", "fall");
		break;
	}

	return 0;
}