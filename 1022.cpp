#include <iostream>

using namespace std;

int main(void)
{
	char data[2001];

	//fgets() ���鹮�ڰ� ���ԵǾ��ִ� ������ �Է¹޾� ����
	fgets(data, 2000, stdin);
	cout << data << endl;

	return 0;
}