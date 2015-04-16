#include<iostream>
using namespace std;

bool prim[10100];

void getEra()
{
	prim[0] = true;
	prim[1] = true;
	for (int i = 2; i*i < 10100; i++)
	{
		if (prim[i] == false)
		{
			for (int j = i*i; j < 10100; j += i)
				prim[j] = true;
		}
	}
}

int main()
{	
	int minLength;
	int maxLength;

	cin >> minLength >> maxLength;

	getEra();

	int sumResult = 0;
	int first = -1;
	for (int i = minLength; i <= maxLength; i++)
	{
		if (prim[i] == false)
		{
			if (first == -1)
				first = i;
			sumResult += i;
			//cout << i << endl;
		}
	}

	if (first == -1)
		cout << first << endl;
	else
		cout << sumResult << endl << first << endl;


	return 0;
}