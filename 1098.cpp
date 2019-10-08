#include <iostream>

using namespace std;

int main(void)
{
	int h, w;
	int n;
	int l, d, x, y;
	int a[101][101] = {};

	cin >> h >> w;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> l >> d >> x >> y;

		if (d == 1)
		{
			for (int j = 0; j < l; j++)
			{
				a[x + j][y] = 1;
			}
		}
		else
		{
			for (int j = 0; j < l; j++)
			{
				a[x][y + j] = 1;
			}
		}
	}

	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}