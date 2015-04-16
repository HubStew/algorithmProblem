#include<iostream>
#include<string>
using namespace std;

int flag[10];

void init()
{
	for (int i = 0; i < 10; i++)
	{
		flag[i] = 0;
	}
}

int main()
{

	int testCase;
	cin >> testCase;

	while(testCase--)
	{
		string number;
		cin >> number;
		init();

		for (int i = 0; i < number.size(); i++)
		{
			flag[(int)number[i]-48]++;
		}

		int count = 0;
		for (int i = 0; i < 10; i++)
		{
			if (flag[i] >= 1)
				count++;
			//cout << flag[i] << " ";
		}
		cout << count << endl;
	}

	return 0;
}