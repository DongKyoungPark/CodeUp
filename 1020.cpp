#include <iostream>

using namespace std;

int main(void)
{
	int a, b;
	scanf_s("%06d-%07d", &a, &b);
	printf("%06d%07d", a, b);

	return 0;
}