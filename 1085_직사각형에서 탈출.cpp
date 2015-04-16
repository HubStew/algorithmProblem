#include<iostream>
using namespace std;

int my_min(int a, int b)
{
	return a > b ? b : a;
}

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int min = 9999999;
	min = my_min(w - x, min);
	min = my_min(h - y, min);
	min = my_min(x, min);
	min = my_min(y, min);

	cout << min << endl;

	return 0;
}