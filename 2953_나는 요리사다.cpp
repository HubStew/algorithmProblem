#include<iostream>
using namespace std;

int main()
{
	int sum = 0;
	int tmpSum = 0;
	int n;
	int number;
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> n;
			tmpSum += n;
		}
		if (tmpSum > sum)
		{
			number = i;
			sum = tmpSum;
		}
		tmpSum = 0;
	}

	cout << number << " " << sum << endl;

	return 0;
}