#include<iostream>
#include<string>
using namespace std;

bool isPrim(int num)
{
	if (num <= 1)
		return true;
	else if (num % 2 == 0)
		return num == 2;
	else
	{
		for (int i = 3; i*i <= num; i += 2)
		{
			if (num % i == 0)
				return false;
		}
	}
	return true;
}

int main()
{
	string input;
	cin >> input;

	int sum = 0;
	for (int i = 0; i < input.length(); i++)
	{

		if ((int)input[i] >= 97)
		{
			// 소문자일때 -96
			sum += (int)input[i] - 96;
		}
		else
		{
			// 대문자일때 -38
			sum += (int)input[i] - 38;
		}
	}
	//cout << sum << endl;
	if (isPrim(sum))
		cout << "It is a prime word." << endl;
	else
		cout << "It is not a prime word." << endl;

	return 0;
}