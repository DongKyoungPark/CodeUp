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
		{ // 먹이를 찾으면 9 저장 후 종료
			a[y][x] = 9;
			break;
		}
		else if (a[y][x + 1] == 0 || a[y][x + 1] == 2)
		{ // 오른쪽에 먹이 또는 길이 있을때
			a[y][x] = 9; // 9 저장 + x값 1 증가(오른쪽으로 한 칸)
			x++;
		}
		else if (a[y][x + 1] == 1 && (a[y + 1][x] == 0 || a[y + 1][x] == 2))
		{ // 오른쪽이 막혔고 아래쪽에 길이나 먹이가 있을때
			a[y][x] = 9; // 9 저장 + y값 1 증가(아래로 한 칸)
			y++;
		}
		else { // 그 이외의 경우(오른쪽+아래 둘다 막혔을 경우)
			a[y][x] = 9; // 9 저장 후에 루프 종료
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
