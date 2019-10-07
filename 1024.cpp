#include <iostream>

using namespace std;

int main(void)
{
	char c[21];
	cin >> c;

	for (int i = 0; c[i]!=NULL ; i++)
	{
		printf("'%c'\n", c[i]);
	}

	return 0;
}