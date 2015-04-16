#include<iostream>
using namespace std;

int main()
{
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;

	if (n1 == n2 && n1 == n3 && n2 == n3)
	{
		cout << 10000 + n1 * 1000 << endl;
	}
	else if (n1 == n2 || n1 == n3 || n2 == n3)
	{
		if (n1 == n2)
			cout << 1000 + n1 * 100 << endl;
		else if (n1 == n3)
			cout << 1000 + n1 * 100 << endl;
		else
			cout << 1000 + n2 * 100 << endl;
	}
	else
	{
		if (n1 > n2 && n1 > n3)
			cout << n1 * 100 << endl;
		else if (n2 > n3 && n2 > n1)
			cout << n2 * 100 << endl;
		else
			cout << n3 * 100 << endl;
	}

	return 0;
}