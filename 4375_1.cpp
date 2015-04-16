#include<iostream>
using namespace std;


int main()
{
	int num;

	while (cin >> num)
	{
		int div = 1;
		int count = 0;
		while(true)
		{
			count++;

			if (div == 0)
				break;

			
			div = 10*div + 1;

			div = div % num;
			
		}

		cout << count << endl;
	}
	
	return 0;
}
