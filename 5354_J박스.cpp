#include<iostream>
using namespace std;

int main()
{
	int testCase;
	cin >> testCase;

	while(testCase--)
	{
		int size;
		cin >> size;

		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (i == 0 || i == size-1 || j == 0 || j == size-1)
					cout << "#";
				else
					cout << "J";
			}

			cout << endl;
		}
		cout << endl;	
	}

	return 0;
}