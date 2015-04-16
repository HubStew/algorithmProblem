#include<iostream>
using namespace std;

int main()
{
	int temp_i = 0;
	int temp_j = 0;
	int max_num = 0;
	int num;

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cin >> num;
			if (max_num < num)
			{	
				max_num = num;
				temp_i = i;
				temp_j = j;
			}
		}
	}

	cout << max_num << endl;
	cout << temp_i << " " << temp_j << endl;

	return 0;
}