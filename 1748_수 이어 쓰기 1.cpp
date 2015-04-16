#include<iostream>
using namespace std;

int main()
{
	int input;
	cin >> input;

	unsigned long long sum = 0;
	for (int i = 1; i <= input; i++)
	{
		if (i < 10)			sum += 1;
		else if (i < 100)	sum += 2;
		else if (i < 1000)	sum += 3;
		else if (i < 10000)	sum += 4;
		else if (i < 100000)		sum += 5;
		else if (i < 1000000)		sum += 6;
		else if (i < 10000000)		sum += 7;
		else if (i < 100000000)		sum += 8;
		else if (i <= 1000000000)	sum += 9;

	}
	cout << sum << endl;

	return 0;
}