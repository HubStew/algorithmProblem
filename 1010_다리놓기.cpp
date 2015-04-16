#include<iostream>
using namespace std;

unsigned long long combinateion(int n, int r);
unsigned long long factorial(int n);

int main()
{
	int testCase;
	cin >> testCase;
	while(testCase--)
	{
		int n, r;
		cin >> r >> n;

		cout << combinateion(n, r) << endl;
	}
	return 0;
}

unsigned long long factorial(int n)
{
	unsigned long long result = 1;
	for (int i = n; i >= 1; i--)
		result *= i;

	return result;
}


unsigned long long combinateion(int n, int r)
{
	long long result = 1;
	for (int i = 0; i < r; i++)
	{
		result *= n;
		n--;
	}

	return (unsigned long long)result / factorial(r);
}