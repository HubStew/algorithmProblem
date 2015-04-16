#include<iostream>
using namespace std;

int map[52][52];
bool isVisited[52][52];

int count = 0;

void init();
void input(int x, int y);
void print(int x, int y);
void getLand(int x, int y, int x_size, int y_size);

int main()
{
	int x, y;
	while (true)
	{
		init();
		cin >> x >> y;
		if (x == 0 && y == 0)
			break;

		input(x, y);
		//print(x, y);

		for (int i = 1; i <= y; i++)
		{
			for (int j = 1; j <= x; j++)
			{
				if (map[i][j] == 1)
				{
					count++;
					getLand(j, i, x, y);
				}
				
			}
		}
		cout << count << endl;
	}


	return 0;
}

void init()
{
	for (int i = 0; i < 52; i++)
	{
		for (int j = 0; j < 52; j++)
		{
			map[i][j] = 0;
			isVisited[i][j] = false;
		}
	}
	count = 0;
}

void input(int x, int y)
{
	for (int i = 1; i <= y; i++)
	{
		for (int j = 1; j <= x; j++)
		{
			cin >> map[i][j];
		}
	}
}

void print(int x, int y)
{
	for (int i = 1; i <= y; i++)
	{
		for (int j = 1; j <= x; j++)
		{
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
}

void getLand(int x, int y, int x_size, int y_size)
{
	if (x <= 0 || y <= 0 || x > x_size || y > y_size)
		return;
	//cout << x << " " << y << endl;

	if (map[y][x] == 0)
		return;
	map[y][x] = 0;

	getLand(x-1, y, x_size, y_size);
	getLand(x+1, y, x_size, y_size);
	getLand(x, y+1, x_size, y_size);
	getLand(x, y-1, x_size, y_size);



	getLand(x-1, y-1, x_size, y_size);
	getLand(x+1, y-1, x_size, y_size);
	getLand(x-1, y+1, x_size, y_size);
	getLand(x+1, y+1, x_size, y_size);

	//isVisited[y][x] = false;
	//count++;


}