#include<iostream>
using namespace std;

int Max(int a, int b) { return a > b ? a : b; }

int main()
{
	int num;
	cin >> num;

	int maxNum = 0;
	int sum = 0;

	int input;
	for (int i = 0; i < num; i++)
	{
		cin >> input;
		if (sum + input > 0)
			sum += input;
		else
			sum = 0;
		
		maxNum = Max(maxNum, sum);
	}
	cout << maxNum << endl;

	return 0;
}

/*
int main()
{
	int size;
	int arr[100001];

	cin >> size;

	for (int i = 0; i < size; i++)
		cin >> arr[i];


	int sum = 0;
	int maxNum = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			sum += arr[j];
			maxNum = Max(sum, maxNum); 
		}
		sum = 0;
	}

	cout << maxNum << endl;

	return 0;
}*/