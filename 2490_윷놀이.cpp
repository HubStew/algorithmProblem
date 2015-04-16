#include<iostream>
using namespace std;

int main()
{

	for (int t = 0; t < 3; t++)
	{
		int zero = 0;
		int one = 0;

		int input;
		for (int i = 0; i < 4; i++)
		{
			cin >> input;
			if (input == 0)
				zero++;
			else
				one++;
		}

		if (one == 4)
			cout << "E" << endl;
		else if (zero == 4)
			cout << "D" << endl;
		else if (one == 1 && zero == 3)
			cout << "C" << endl;
		else if (one == 2 && zero == 2)
			cout << "B" << endl;
		else
			cout << "A" << endl;
	}
	return 0;
}