#include <iostream>

using namespace std;

int main(void)
{
	int x, y;
	int a[11][11];
	int dest = 2;
	int ant = 9;

	for (y = 1; y <= 10; y++)
	{
		for (x = 1; x <= 10; x++)
		{
			cin >> a[y][x];
		}
	}

	x = y = 2;

	while(true)
	{
		if (a[y][x] == 2) 
		{ // ���̸� ã���� 9 ���� �� ����
			a[y][x] = 9;
			break;
		}
		else if (a[y][x + 1] == 0 || a[y][x + 1] == 2)
		{ // �����ʿ� ���� �Ǵ� ���� ������
			a[y][x] = 9; // 9 ���� + x�� 1 ����(���������� �� ĭ)
			x++;
		}
		else if (a[y][x + 1] == 1 && (a[y + 1][x] == 0 || a[y + 1][x] == 2))
		{ // �������� ������ �Ʒ��ʿ� ���̳� ���̰� ������
			a[y][x] = 9; // 9 ���� + y�� 1 ����(�Ʒ��� �� ĭ)
			y++;
		}
		else { // �� �̿��� ���(������+�Ʒ� �Ѵ� ������ ���)
			a[y][x] = 9; // 9 ���� �Ŀ� ���� ����
			break;
		}
	}

Show:
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}
