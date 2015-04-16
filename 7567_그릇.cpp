#include<iostream>
#include<string>
using namespace std;

int main()
{
	string input;
	int height[55];

	height[0] = 10;

	cin >> input;
	for (int i = 1; i < input.length(); i++)
	{
		if (input[i-1] == input[i])
		{
			height[i] = 5;
		}
		else
			height[i] = 10;
	}

	int sum = 0;
	for (int i = 0; i < input.length(); i++)
	{
		sum += height[i];
		//cout << height[i] << endl;
	}
	cout << sum << endl;

	return 0;
}