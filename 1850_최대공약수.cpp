#include<iostream>
using namespace std;

unsigned long long gcd(unsigned long long p, unsigned long long q);

int main()
{
	int a;
	int b;
	cin >> a >> b;

	unsigned long long res_a = 1;
	unsigned long long sum_a = 0;

	unsigned long long res_b = 1;
	unsigned long long sum_b = 0;

	for (int i = 0; i < a; i++)
	{
		sum_a += res_a;
		res_a *= 10;
	}

	for (int i = 0; i < b; i++)
	{
		sum_b += res_b;
		res_b *= 10;
	}

	//cout << sum_a << " " << sum_b << endl;

	if (a > b)
		cout << gcd(sum_a, sum_b) << endl;
	else
		cout << gcd(sum_b, sum_a) << endl;

	return 0;
}

unsigned long long gcd(unsigned long long p, unsigned long long q)
{
	if (q == 0)
		return p;
	else
		return gcd(q, p%q);
}