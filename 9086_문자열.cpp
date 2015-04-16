#include<iostream>
#include<string>
using namespace std;

int main()
{
	int testCase;
	cin >> testCase;

	string input;
	while(testCase--)
	{
		cin >> input;

		cout << input[0] << input[input.length()-1] << endl;
	}

	return 0;
}