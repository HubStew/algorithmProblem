#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

#define MAX_SIZE 30

int map[MAX_SIZE][MAX_SIZE];

void DFS(int col, int row, int size);
void Print(int size);

int dangiNum = 0;
int countSave[MAX_SIZE * MAX_SIZE];
int DFSCount = 0;

int main()
{
	int size;
	cin >> size;

	string str;
	for (int i = 1; i <= size; i++)
	{
		cin >> str;
		for (int j = 1; j <= size; j++)
		{			
			map[i][j] = (str[j-1] == '0' ? 0 : 1);
			//cin >> map[i][j];
		}
	}

	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= size; j++)
		{	
			if (map[i][j] == 1)
			{
				DFSCount = 0;
				DFS(i, j, size);
				countSave[dangiNum] = DFSCount;
				dangiNum++;
				//cout << DFSCount << endl;
				//Print(size);
			}
		}	
	}

	cout << dangiNum << endl;
	sort(countSave, countSave + dangiNum);
	for (int i = 0; i < dangiNum; i++)
		cout << countSave[i] << endl;

	

	return 0;
}

void Print(int size)
{
	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= size; j++)
		{
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
}

void DFS(int col, int row, int size)
{
	
	if (col > size || col <= 0 || row > size || row <= 0)
		return;

	map[col][row] = 0;
	DFSCount++;

	if (map[col+1][row] == 1)	DFS(col+1, row, size);
	if  (map[col-1][row] == 1)	DFS(col-1, row, size);
	if  (map[col][row+1] == 1)	DFS(col, row+1, size);
	if  (map[col][row-1] == 1)	DFS(col, row-1, size);
}