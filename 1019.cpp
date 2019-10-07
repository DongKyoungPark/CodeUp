#include <iostream>

using namespace std;

int main(void)
{
	int y, m, d;
	scanf_s("%04d.%02d.%02d", &y, &m, &d);
	printf("%04d.%02d.%02d", y, m, d);

	return 0;
}