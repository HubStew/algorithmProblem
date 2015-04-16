#include<iostream>
#include<stdio.h>
using namespace std;

double Max(double a, double b) { return a > b ? a : b; }

int main()
{
	double arr[10005];

	int size;
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		scanf("%lf", &arr[i]);
		//cout << arr[i] << endl;
	}

	double mul = 1;
	double result = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			//cout << arr[j] << endl;
			mul *= arr[j];

			result = Max(result, mul);
			//cout << mul << " " << result << endl;
		}
		mul = 1;
		//cout << endl;
	}
	
	printf("%.3f", result);

	return 0;
}