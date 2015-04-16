#include<iostream>
using namespace std;

int coord[100][100];

int main()
{
	int x1, x2, y1, y2;


	for (int t = 0; t < 4; t++)
	{
		cin >> x1 >> y1 >> x2 >> y2;

		for (int y = y1; y < y2; y++)
		{
			for (int x = x1; x < x2; x++)
				coord[y][x] = 1;
		}
	}

	int count = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (coord[i][j] == 1)
				count++;
		}
	}

	cout << count << endl;

	return 0;
}