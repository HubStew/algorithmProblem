#include<iostream>
#include<string>
using namespace std;

int main()
{
	string input;
	
	while(cin >> input)
	{
		string decimalStr = "";
		double decimal;
		//cout << input << endl;
		int start = 0;
		int end = 0;
		long denomi = 0;
		int dot = 0;

		string numerStr = "";
		for (int i = 0; i < input.length(); i++)
		{
			if (input[i] == '(')
				start = i - 1;
			else if (input[i] == ')')
				end = i - 2;
			else
			{
				decimalStr += input[i];
				if (input[i] == '.')
					dot = i;
				else
					numerStr += input[i];
			}

		}

		for (int i = start; i < end; i++)
		{
			denomi += 9;
			denomi *= 10;
		}
		denomi /= 10;

		decimal = stod(decimalStr);

		double temp = decimal;

		for (int i = dot; i < start; i++)
		{
			denomi *= 10;
			temp *= 10;
		}

		int minuNumer = temp;
		long numer = stoi(numerStr) - minuNumer;

		//cout << numer << " " << dot << " " << denomi << endl;
		int small = numer > denomi ? denomi : numer;
		 for (int i = small; i >= 1; i--)
		 {
			 if (numer % i == 0 && denomi % i == 0)
			 {
				 numer /= i;
				 denomi /= i;
			 }
		 }

		 cout << input << " = "<< numer << " / " << denomi << endl;
	}

	return 0;
}