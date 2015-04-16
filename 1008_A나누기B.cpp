#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int a = 1;
	int b = 3;

	cin >> a >> b;

	printf("%.15f", (double)a/b);

	return 0;
}