#include <iostream>
using namespace std;

int main()
{
	char chess_pan[8][8];

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> chess_pan[i][j];
		}
	}

	int count = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if ((i % 2 == 0) && (j % 2 == 0))
			{
				if (chess_pan[i][j] == 'F')
					count++;
			}

			if ((i % 2 == 1) && (j % 2 == 1))
			{
				if (chess_pan[i][j] == 'F')
					count++;
			}
		}
	}

	cout << count << endl;

	return 0;
}