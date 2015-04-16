#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int testCase;
	cin >> testCase;

	while(testCase--)
	{
		int x1, y1, x2, y2, r1, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		double d = sqrt((double)((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)));
		//cout << d << " " << r1+r2 << endl;

		if (r2 > r1)			// r1 > r2
			swap(r2, r1);

		if (x1 == x2 && y1 == y2 && r1 == r2)
			cout << "-1" << endl;
		else 
		{
			if (r1 - r2 < d && r1 + r2 > d)
				cout << "2" << endl;
			else if (d == r1+r2 || d == r1 - r2)
				cout << "1" << endl;
			else if (d > r1 + r2 || d + r2 < r1 || d == 0)
				cout << "0" << endl;
		}
	}

	return 0;
}