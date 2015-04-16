#include<iostream>
#include<string>
#include<stdio.h>
#include<cmath>
using namespace std;

double Round(double x, int n);

int main()
{
	int num;
	float sum = 0;
	int creditSum = 0;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		string s;
		int credit;
		
		string grade;
		cin >> s >> credit >> grade;

		creditSum += credit;

		if (grade == "A+")			sum += 4.3 * credit;
		else if (grade == "A0")		sum += 4.0 * credit;
		else if (grade == "A-")		sum += 3.7 * credit;
		else if (grade == "B+")		sum += 3.3 * credit;
		else if (grade == "B0")		sum += 3.0 * credit;
		else if (grade == "B-")		sum += 2.7 * credit;
		else if (grade == "C+")		sum += 2.3 * credit;		
		else if (grade == "C0")		sum += 2.0 * credit;
		else if (grade == "C-")		sum += 1.7 * credit;
		else if (grade == "D+")		sum += 1.3 * credit;
		else if (grade == "D0")		sum += 1.0 * credit;
		else if (grade == "D-")		sum += 0.7 * credit;
		else if (grade == "F")		sum += 0 * credit;

	}

	double result = sum / creditSum;
	result = Round(result, 2);
	printf("%.2f\n", result);

	return 0;
}

double Round(double x, int n)
{
	int i;

	for ( i = 0; i < n; ++i )
		x *= 10; 

	if ( (float)(x - (int)x) >= 0.50 )
		x = ceil(x);
	else
		x = floor(x);            

	for ( i = 0; i < n; ++i )
		x /= 10;

	return x;
}