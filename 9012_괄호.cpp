#include<iostream>
#include<string>
using namespace std;

#define MAX_VPS 51

void init(bool *arr)
{
	for (int i = 0; i < MAX_VPS; i++)
		arr[i] = 0;
}

int main()
{
	int testCase;
	cin >> testCase;

	string ps;
	bool isVPS[MAX_VPS];
	while(testCase--)
	{
		cin >> ps;
		init(isVPS);

		for (int i = 0; i < ps.length(); i++)
		{
			if (ps[i] == '(' && isVPS[i] == 0 )
			{
			
				for (int j = i+1; j < ps.length(); j++)
				{
					if (ps[j] == ')'&& isVPS[j] == 0)
					{
						isVPS[i] = 1;
						isVPS[j] = 1;
						break;
					}
				}
			}
		}

		bool result = true;
		for (int i = 0; i < ps.length(); i++)
		{
			if (isVPS[i] == 0)
			{
				result = false;
				break;
			}
			//cout << isVPS[i];
		}
		if (result == true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
			//cout << endl;
	}


	return 0;
}