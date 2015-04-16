#include<iostream>
#include<vector>
using namespace std;

#define MAX_SIZE 105
int firstArr[MAX_SIZE];
int secondArr[MAX_SIZE];

bool firstVisit[MAX_SIZE];
bool secondVisit[MAX_SIZE];

void findNumber(int index, int size);

int tempA;
int tempB;

vector<int> v;
bool result[MAX_SIZE];

int main()
{
	int numSize;
	cin >> numSize;

	for (int i = 1; i <= numSize; i++)
	{
		firstArr[i] = i;
		cin >> secondArr[i];
	}

	for (int i = 1; i <= numSize; i++)
	{
		tempA = i;
		findNumber(i, numSize);

		for (int i = 0; i <= numSize; i++)
		{
			firstVisit[i] = 0;
			secondVisit[i] = 0;
		}

		v.clear();
	}

	int resultCnt = 0;

	for (int i = 0; i < MAX_SIZE; i++)
	{
		if (result[i] == true)
			resultCnt++;
	}

	cout << resultCnt << endl;
	for (int i = 0; i < MAX_SIZE; i++)
	{
		if (result[i] == true)
			cout << i << endl;
	}


	return 0;
}

void findNumber(int index, int size)
{

	//cout << firstArr[index] << " " << secondArr[index] << endl;
	tempB = secondArr[index];
	v.push_back(index);
	v.push_back(secondArr[index]);

	//cout << tempA << " " << tempB << endl;
	if (tempA == tempB)
	{
		for (int j = 0; j < v.size(); j++)
		{
			//cout << v[j] << " ";
			result[v[j]] = true;		
		}
		//cout << endl;
		return;
	}

	if (firstVisit[index] == true && secondVisit[index] == true)
	{
		return;
	}

	firstVisit[index] = true;
	secondVisit[index] = true;


	findNumber(secondArr[index], size);
}