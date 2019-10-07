#include <iostream>

using namespace std;

int main(void)
{
	char data[2001];

	//fgets() 공백문자가 포함되어있는 문장을 입력받아 저장
	fgets(data, 2000, stdin);
	cout << data << endl;

	return 0;
}