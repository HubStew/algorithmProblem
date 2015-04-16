#include <iostream>
using namespace std;

#define MAX_AREA 105

int area[MAX_AREA][MAX_AREA];
bool areaFlag[MAX_AREA][MAX_AREA];

int size;

void Init();
void Print(int size);
void GetSafe(int x, int y, int height);
void SetHeight(int height);
int max_func(int data1 , int data2);

int main()
{

	//int nCount;		/* 문제의 테스트 케이스 */
	//cin >> nCount;	/* 테스트 케이스 입력 */


	//for(int tc = 0; tc < nCount; tc++)
	//{

		cin >> size;
		Init();

		int maxHeight = 0;
		for ( int i = 1; i <= size; i++)
		{
			for (int j = 1; j <= size; j++)
			{
				cin >> area[i][j];
				maxHeight = max_func(maxHeight, area[i][j]);
			}
		}

		int count = 0; 
		int maxCount = 0;
		for (int h = 1; h <= maxHeight; h++)
		{
			Init();

			SetHeight(h);
			count = 0;
			//cout << "height *********** " << h << endl;

			for ( int i = 1; i <= size; i++)
			{
				for (int j = 1; j <= size; j++)
				{
					if (areaFlag[i][j] == true)
					{
						count++;
					}

					GetSafe(i, j, h);
					
				}
			}	
			//cout << count << endl;
			maxCount = max_func(maxCount, count);
		}

		//cout << "#testcase" << (tc+1) << endl;
		if (maxCount == 0)
			cout << 1 << endl;
		else
			cout << maxCount << endl;

	//}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}

void Init()
{
	for (int i = 0; i < MAX_AREA; i++)
	{
		for (int j = 0; j < MAX_AREA; j++)
		{	
			//area[i][j] = 0;
			areaFlag[i][j] = false;
		}
	}

}

void SetHeight(int height)
{
	for (int i = 0; i < MAX_AREA; i++)
	{
		for (int j = 0; j < MAX_AREA; j++)
		{	
			if (area[i][j] > height)
				areaFlag[i][j] = true;
		}
	}
}

void Print(int size)
{
	for ( int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= size; j++)
		{
			//cout << area[i][j] << " ";
			cout << areaFlag[i][j] << " ";
		}
		cout << endl;
	}
}

void GetSafe(int x, int y, int height)
{
	if (x <= 0 || y <= 0 || x > size || y > size)
		return;

	if (areaFlag[x][y] == true)
	{
		
		areaFlag[x][y] = false;
		//cout << area[x][y] << endl;
		GetSafe(x+1, y, height);
		GetSafe(x-1, y, height);
		GetSafe(x, y+1, height);
		GetSafe(x, y-1, height);
		
	}

}

int max_func(int data1 , int data2)
{
	if (data1 > data2)
		return data1;
	else
		return data2;
}