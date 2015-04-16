#include<iostream>
#include<deque>
#include<string>
using namespace std;

#define MAX_SIZE 105

struct my_pair
{
	short col;
	short row;
	short len;
};

deque<my_pair> que;

int col_size, row_size;
bool map[MAX_SIZE][MAX_SIZE];

void print();
void BFS(int startI, int startJ);

int main()
{
	
	cin >> col_size >> row_size;

	string str;
	for (int i = 1; i <= col_size; i++)
	{
		cin >> str;
		for (int j = 1; j <= row_size; j++)
		{
			if (str[j-1] - 48 == 1)
				map[i][j] = 1;
			else
				map[i][j] = 0;
		}
	}

	BFS(1, 1);

	return 0;
}

void BFS(int startI, int startJ)
{

	my_pair p;
	p.col = startI;
	p.row = startJ;
	p.len = 1;

	que.push_back(p);

	my_pair p2;

	int pos = 0;
	int count = 0;

	while(true)
	{
		p = que.front();

		if (p.col == col_size && p.row == row_size || que.empty())
		{
			cout << p.len << endl;
			break;
		}
		map[p.col][p.row] = 0;

		que.pop_front();

		if (map[p.col-1][p.row] == 1)
		{			
			p2.col = p.col-1;
			p2.row = p.row;
			p2.len = p.len + 1;
			que.push_back(p2);
			
			map[p.col-1][p.row] = 0;
		}

		if (map[p.col+1][p.row] == 1)
		{			
			p2.col = p.col+1;
			p2.row = p.row;
			p2.len = p.len + 1;

			que.push_back(p2);
			map[p.col+1][p.row] = 0;
		}

		if (map[p.col][p.row-1] == 1)
		{			
			p2.col = p.col;
			p2.row = p.row-1;
			p2.len = p.len + 1;

			que.push_back(p2);
			map[p.col][p.row-1] = 0;
		}

		if (map[p.col][p.row+1] == 1)
		{			
			p2.col = p.col;
			p2.row = p.row+1;
			p2.len = p.len + 1;

			que.push_back(p2);
			map[p.col][p.row+1] = 0;
		}
	}
}

void print()
{
	for (int i = 1; i <= col_size; i++)
	{
		for (int j = 1; j <= row_size; j++)
		{
			cout << map[i][j];
		}
		cout << endl;
	}
}