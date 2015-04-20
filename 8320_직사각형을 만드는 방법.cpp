#include<iostream>
using namespace std;


int main()
{
	int num;
	cin >> num;

	int count = 0;
	for (int i = 1; i <= num; i++)
	{
		for (int j = i; j <= num; j++)
		{
			if (i * j <= num)
			{
				//cout << i << " " << j << " " << i * j << endl;
				count++;
			}
		}
	}
	cout << count << endl;

	return 0;
}