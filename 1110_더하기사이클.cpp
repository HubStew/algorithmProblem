#include<iostream>
using namespace std;


int main()
{
	int num;
	cin >> num;

	int posTen = 0;
	int posOne = 1;

	int inputNum = num;
	int sum;

	int count = 0;
	while(true)
	{


		int digitTen = num / 10;
		int digitOne = num - digitTen * 10;
		
		sum = digitTen + digitOne;
		num = digitOne*10 + (sum - (sum / 10)*10);

		count++;
		//cout << digitTen << " " << digitOne << " " << sum << " " << num << endl;
		
		if (num == inputNum)
			break;
	}

	cout << count << endl;

	return 0;
}