#include<iostream>
#include<string>
using namespace std;

int countArr[10];

int main()
{
	int num;
	cin >> num;

	int digitNum = 10;
	string s;
	for (long i = 1; i <= num; i++)
	{
		s = to_string((long long) i);
		//cout << s << endl;
		for (int j = 0; j < s.length(); j++)
		{
			countArr[(int)s[j] - 48]++;
		}


	}

	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << i << " : " << countArr[i] << endl;
		sum += countArr[i];
		sum = sum % 1234567;
	}
	cout << sum << endl;

	return 0;
}