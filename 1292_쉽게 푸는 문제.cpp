#include<iostream>
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;

	int sum = 0;
	int count = 1;
	for (int i = 1; i < 1000; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (count >= A && count <= B)
			{
				//cout << i << " ";
				sum += i;
			}
			count++;
		}

		if (count > B)
			break;
	}

	cout << sum << endl;

	return 0;
}