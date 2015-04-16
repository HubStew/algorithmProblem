#include<iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	int fiveCount = 0;

	int n;

	unsigned long long f = 1;
	for (int i = 1; i <= num; i++)
	{
		n = i;
		//cout << i << endl;
		while(true)
		{
			if (n % 5 != 0)
				break;
			//cout << n << endl;
			fiveCount++;
			n = n / 5;			
		}
		//cout << endl;
	}

	cout << fiveCount << endl;

	return 0;
}