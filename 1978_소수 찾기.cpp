#include<iostream>
#include<cmath>
using namespace std;


int input_arr[101];
bool isPrim(int num);


int main()
{
	int input_size;
	cin >> input_size;

	for (int i = 0; i < input_size; i++)
		cin >> input_arr[i];

	int count = 0;

	for (int i = 0; i < input_size; i++)
	{
		if (isPrim(input_arr[i]) == true)
			count++;
	}

	cout << count << endl;


	return 0;
}

bool isPrim(int num)
{
	if (num <= 1)
		return false;
	else if (num % 2 == 0)
	{
		if (num == 2)
			return true;
		else
			return false;
	}
	else
	{
		int sq = (int)sqrtl(num);
		for (int i = 3; i <= sq; i += 2)
		{
			if (num % i == 0)
				return false;
		}
	}

	return true;
}