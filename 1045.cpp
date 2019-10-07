#include <iostream>

using namespace std;

int main(void)
{
	unsigned int a, b;

	cin >> a >> b;

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
	printf("%.2f\n", (float)a / b);

	return 0;
}