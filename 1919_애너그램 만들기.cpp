#include<iostream>	
#include<string>
using namespace std;


int first_count[30];
int second_count[30];

int main()
{
	string firstStr;
	string secondStr;


	cin >> firstStr >> secondStr;

	for (int i = 0; i < firstStr.length(); i++)
	{
		first_count[(int)firstStr[i] - 97]++;
	}

	for (int i = 0; i < secondStr.length(); i++)
	{
		second_count[(int)secondStr[i] - 97]++;
	}

	int sum = 0;
	for (int i = 0; i < 27; i++)
	{
		if (first_count[i] - second_count[i] > 0)
			sum += first_count[i] - second_count[i];
		else
			sum += second_count[i] - first_count[i];
	} 
	cout << sum << endl;

	return 0;
}
