#include<iostream>
#include<string>
using namespace std;

string str[1000000] = {"", };


int main()
{

	string input;
	getline(cin, input);

	//for (int i = 0; i < 1000000; i++)
	//	str[i] = "";

	int count = 0;

	
	for (int i = 0; i < input.length(); i++)
	{

		if (input[i] == ' ')
		{
			count++;
			continue;
		}

		str[count] += input[i]; 
	}

	int result = 0;
	for (int i = 0; i <= count; i++)
	{

		//cout << str[i] << endl;
		if (str[i] == "")
		{
			
		}
		else
			result++;
		
	}

	cout << result << endl;

	return 0;
}