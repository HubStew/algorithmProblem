#include<iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	int i = 1;
	int j = 1;

	int count = 0;
	int index = 1;

	while(true)
	{
		for (int k = 1; k < index; k++)
		{
			i = k;
			j = index - k;
			//cout << i << " " << j << endl;
			count++;
			if (count == num)
				break;
		}

		if (count == num)
			break;

		index++;

	}

	if (index % 2 == 0)
		cout << j << "/" << i << endl;
	else
		cout << i << "/" << j << endl;
	//cout << index << "  ";
	//cout << i << " " << j << endl;

	return 0;
}