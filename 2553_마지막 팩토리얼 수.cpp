#include<iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	unsigned long long result = 1;
	int tempI;
	for (int i = 2; i <= num; i++)
	{
	
		tempI = i;

		while(tempI % 10 == 0)
			tempI /= 10;

		result *= tempI;
		
		while(result % 10 == 0)
			result /= 10;

		result = result % 10000;

		//cout << result << endl;
		
	}
	//while(result % 10 == 0)
	//	result /= 10;

	cout << result << endl;

	return 0;
}