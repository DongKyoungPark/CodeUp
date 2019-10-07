#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	
	// << 1 : 2배
	// >> 1 : 2나눔
	// << 2 : 4배
	// >> 2 : 반으로 나눈후 다시 반으로 나눔
	printf("%d", n << 1);

	return 0;
}