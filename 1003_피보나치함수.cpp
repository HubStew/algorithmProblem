#include<iostream>
using namespace std;

int count0 = 0;
int count1 = 0;

int fibonacci(int n) {
	if (n==0) {
		count0++;
		//printf("0\n");
		return 0;
	} else if (n==1) {
		count1++;
		//printf("1\n");
		return 1;
	} else {
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		count0 = 0;
		count1 = 0;
		int n;
		cin >> n;
		fibonacci(n);
		cout << count0 << " " << count1 << endl;
	}

	return 0;
}