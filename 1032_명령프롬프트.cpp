#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str[50];
	int number;
	cin >> number;

	for (int i = 0; i < number; i++)
	{
		cin >> str[i];
	}

	string result = "";

	for (int j = 0; j < str[0].size(); j++)
	{
		bool flag = true;
		char c;
		c = str[0][j];
		for (int i = 0; i < number; i++)
		{
			if (c != str[i][j])
			{
				flag = false;
			}
		}

		if (flag == true)
			result += c;
		else
			result += "?";
	}

	cout << result << endl;

	return 0;
}