#include<iostream>
#include<string>
using namespace std;

int count[10];

int main()
{
	int A, B, C;
	long long mul = 1;
	
	cin >> A >> B >> C;
	mul = A * B * C;
	string s = to_string(mul);

	for (int i = 0; i < s.length(); i++)
	{
		count[(int)s[i] - 48]++;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << count[i] << endl;
	}

	return 0;
}