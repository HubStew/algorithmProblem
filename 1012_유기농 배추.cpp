#include<iostream>
using namespace std;

#define MAX_SIZE 52
int map[MAX_SIZE][MAX_SIZE];

void init();
void find_beachu(int x, int y, int sero_size, int garo_size);
void print(int sero, int garo);

int main()
{
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		init();
		int garo_size;
		int sero_size;
		int x, y;
		int input_size;
		cin >> garo_size >> sero_size >> input_size;

		int count = 0;
		for (int is = 0; is < input_size; is++)
		{		
			cin >> x >> y;
			map[y][x] = 1;
		}

		for (int i = 0; i < sero_size; i++)
		{
			for (int j = 0; j < garo_size; j++)
			{
				if (map[i][j] == 1)
				{
					count++;
					find_beachu(j, i, sero_size, garo_size);
				}
			}
		}

		//print(sero_size, garo_size);
		cout << count << endl;
	}

	return 0;
}

void init()
{
	for (int i = 0; i < MAX_SIZE; i++)
	{
		for (int j = 0; j < MAX_SIZE; j++)
			map[i][j] = 0;
	}
}

void print(int sero, int garo)
{
	for (int i = 0; i < sero; i++)
	{
		for (int j = 0; j < garo; j++)
			cout << map[i][j];
		cout << endl;
	}
}

void find_beachu(int x, int y, int sero_size, int garo_size)
{
	if (x < 0 || y < 0 || sero_size <= y || garo_size <= x)
		return;

	if (map[y][x] == 1)
	{
		map[y][x] = 0;
		find_beachu(x+1, y, sero_size, garo_size);
		find_beachu(x, y+1, sero_size, garo_size);
		find_beachu(x-1, y, sero_size, garo_size);
		find_beachu(x, y-1, sero_size, garo_size);

	}
}