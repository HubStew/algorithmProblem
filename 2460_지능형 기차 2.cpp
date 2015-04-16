#include<iostream>	
using namespace std;

int my_max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int getOn;
	int getOff;

	int passenger = 0;
	int max_pass = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> getOn >> getOff;
		passenger = passenger + getOff - getOn;
		max_pass = my_max(max_pass, passenger);
	}
	
	cout << max_pass << endl;

	return 0;
}