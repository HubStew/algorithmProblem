#include <iostream>
#include <algorithm>
using namespace std;

int min(int a, int b)
{
	return a > b ? b : a;
}

int max(int a, int b)
{
	return a < b ? b : a;
}

int main(){

	int n; 
	cin >> n;

	int my_min = 1000000;
	int my_max = 1;

	for (int i = 0; i < n; ++i)
	{
		int temp; 
		cin >> temp;
		my_min = min(my_min, temp);
		my_max = max(my_max, temp);
	}
	cout << my_min * my_max << endl;
	return 0;
}
