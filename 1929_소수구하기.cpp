#include<iostream>
using namespace std;

#define MAX_SIZE 1000000
bool prim[MAX_SIZE];

int main()
{
	int first;
	int second;
	cin >> first >> second;



	for (int i = 2; i*i <= second; i++)
	{
		if (prim[i] == false)
		{
			for (int j = i*i; j <= second; j+= i)
				prim[j] = true;
		}
	}

	for (int i = first; i <= second; i++)
	{
		if (prim[i] == false)
			cout << i << endl;
	}


	return 0;
}
