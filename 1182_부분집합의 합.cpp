#include<iostream>
using namespace std;

#define MAX_SIZE 25

int set[MAX_SIZE];
bool visit[MAX_SIZE];
int setSize;
int findNum;

int resultCount = 0;

void subSet(int nowNum);

int main()
{
	cin >> setSize >> findNum;
	for (int i = 0; i < setSize; i++)
		cin >> set[i];

	subSet(0);
	cout << resultCount << endl;

	return 0;
}

void subSet(int nowNum)
{

	if (nowNum == setSize)
	{
		int sum  = 0;

		int trueCount = 0;
		for (int i = 0; i < setSize; i++)
		{
			if (visit[i] == true)
			{
				sum += set[i];
				//cout << set[i] << " ";
				trueCount++;
			}
		}

		if (trueCount != 0)
		{
			//cout << sum << endl;
			if (sum == findNum)
				resultCount++;
			//cout << endl;
		}
		return;
	}
	else
	{
		visit[nowNum] = true;
		subSet(nowNum + 1);
		visit[nowNum] = false;
		subSet(nowNum + 1);
	}
}
