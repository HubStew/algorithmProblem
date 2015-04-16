#include<iostream>
using namespace std;

int main()
{
	int size;
	
	int k;

	cin >> size >> k;

	int *arr = new int[size + 1];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

		
	int sum = 0;
	int maxNum = -999999999;

	int firstIdx = 0;
	int lastIdx = k - 1;

	for (int i = firstIdx; i <= lastIdx; i++)
		sum += arr[i];
	//cout << sum << endl;
	while(true)
	{
		if (maxNum < sum)
			maxNum = sum;
		//cout << sum << endl;

		if (lastIdx+1 >= size)
			break;

		sum = sum - arr[firstIdx];

		firstIdx++;
		lastIdx++;

		sum = sum + arr[lastIdx];

	}

	cout << maxNum << endl;

	return 0;
}