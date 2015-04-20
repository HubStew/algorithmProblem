#include<iostream>
#include<algorithm>
using namespace std;

struct Rectangle
{
	int x;
	int y;
};

int cmp (Rectangle r1, Rectangle r2)
{
	return r1.x < r2.x;
}

Rectangle rec[1001];
Rectangle rec2[1001];

bool isUnUse[1001];

int main()
{
	int recNum;
	cin >> recNum;

	for (int i = 0; i < recNum; i++)
		cin >> rec[i].x >> rec[i].y;

	sort(rec, rec + recNum, cmp);

	return 0;
}