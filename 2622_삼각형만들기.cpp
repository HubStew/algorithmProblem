#include<iostream>
using namespace std;

int main()
{
	int matchNum;
	cin >> matchNum;

	int sideLength1;
	int sideLength2;
	int sideLength3;

	int count = 0;

	for (int i = 1; i <= matchNum / 2; i++)
	{		
		for (int j = 1; j <= i; j++)
		{
			sideLength1 = i;
			sideLength2 = j;
			sideLength3 = matchNum - sideLength1 - sideLength2;

			if (sideLength3 <= 0)
				break;

			//cout << sideLength1 << " " << sideLength2 << " " << sideLength3 << endl;
			if (sideLength3 >= sideLength2 && sideLength3 >= sideLength1)
			{
				if (sideLength3 < sideLength1 + sideLength2)
				{
					if (sideLength2 < sideLength1)
						swap(sideLength1, sideLength2);

					if (sideLength3 > (sideLength2 - sideLength1))
					{
						count++;
						//cout << sideLength1 << " " << sideLength2 << " " << sideLength3 << endl;
					}
				}
				else if (sideLength1 == sideLength2 && sideLength2 == sideLength3)
				{
					count++;
					//cout << sideLength1 << " " << sideLength2 << " " << sideLength3 << endl;
				}
			}
			else
				break;

		}
	}

	cout << count << endl;

	return 0;
}