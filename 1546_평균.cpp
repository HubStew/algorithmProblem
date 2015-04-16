#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	double arr[1000];
	int input;
	int Max = 0;
	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		if (arr[i] > Max)
			Max = arr[i];
	}

	for (int i = 0; i < N; i++)
	{
		arr[i] = (arr[i] / Max) * 100;
		//cout << arr[i] << endl;
		sum += arr[i];
	}

	double result = sum / N;
	printf("%.2f\n", result);
	

	return 0;
}


