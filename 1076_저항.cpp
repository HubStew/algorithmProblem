#include<iostream>
#include<string>
using namespace std;

struct Resistor
{
	string color;
	int value;
	unsigned long long mul;
};

Resistor resi[] = {	{"black", 0, 1 }, 
					{"brown", 1, 10 }, 
					{"red", 2, 100 }, 
					{"orange", 3, 1000 }, 
					{"yellow", 4, 10000 }, 
					{"green", 5, 100000 }, 
					{"blue", 6, 1000000 }, 
					{"violet", 7, 10000000 }, 
					{"grey", 8, 100000000 }, 
					{"white", 9, 1000000000 }};

int main()
{
	string input1;
	string input2;
	string input3;

	cin >> input1 >> input2 >> input3;

	unsigned long long val = 0;
	for (int i = 0; i < 10; i++)
	{
		if (resi[i].color == input1)
		{
			//cout << resi[i].color << " " << resi[i].value << endl;
			val = resi[i].value * 10;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (resi[i].color == input2)
		{
			//cout << resi[i].color << " " << resi[i].value << endl;
			val += resi[i].value;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (resi[i].color == input3)
		{
			//cout << resi[i].color << " " << resi[i].value << endl;
			val *= resi[i].mul;
		}
	}
	
	cout << val << endl;

	return 0;
}