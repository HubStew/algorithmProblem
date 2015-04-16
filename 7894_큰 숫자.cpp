#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int testCase;
	//cin >> testCase;
	double *arr = new double[10000000];
	scanf("%d", &testCase);

	//cout << "e";
	double sum = 1.0;
	for (int i = 1; i <= 10000000; ++i)
	{
			//cout << log10((double)i) << endl;
		sum += log10((double)i);
		arr[i] = sum;
	}

	while(testCase--)
	{
		int input;
		
		cin >> input;

		cout << (int)arr[input] << endl;
	}

	return 0;
}