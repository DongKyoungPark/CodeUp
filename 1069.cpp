#include <iostream>

using namespace std;

int main(void)
{
	char a;
	cin >> a;

	switch (a)
	{
	case 'A':
		printf("%s\n", "best!!!");
		break;
	case 'B':
		printf("%s\n", "good!!");
		break;
	case 'C':
		printf("%s\n", "run!");
		break;
	case 'D':
		printf("%s\n", "slowly~");
		break;
	default:
		printf("%s\n", "what?");
		break;
	}

	return 0;
}