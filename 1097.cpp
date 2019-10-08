#include <iostream>

using namespace std;

int main(void)
{
	int n, x, y;
	int a[20][20] = {};

	for (int i = 1; i <= 19; i++)
	{
		for (int j = 1; j <= 19; j++)
		{
			cin >> a[i][j];
		}
	}

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x >> y;
		for (int j = 1; j <= 19; j++)
		{
			if (a[x][j] == 0)
				a[x][j] = 1;
			else
				a[x][j] = 0;
		}
		for (int j = 1; j <= 19; j++)
		{
			if (a[j][y] == 0)
				a[j][y] = 1;
			else
				a[j][y] = 0;
		}
	}

	for (int i = 1; i <= 19; i++)
	{
		for (int j = 1; j <= 19; j++)
		{
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}