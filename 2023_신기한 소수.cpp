#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void GetAmazingPrim(int now, int size, string amazing_prim);
bool isPrim(int num);

string prim_num;
bool isAmazingPrim;

int main()
{
	int input;

	cin >> input;
	int scope = 1;
	int scope_max = 1;
	for (int i = 1; i < input; i++, scope *= 10, scope_max *= 10);
	scope_max *= 10;

	//cout << scope << " " << scope_max << endl;

	for (int i = scope; i <= scope_max; i++)
	{
		if (isPrim(i))
		{
			isAmazingPrim = false;
			//cout << i << endl;
			prim_num = to_string((long long)i);
			GetAmazingPrim(0, input, "");

			if (isAmazingPrim == true)
			{
				cout << i << endl;
			}
		}			
	}

	return 0;
}

void GetAmazingPrim(int now, int size, string amazing_prim)
{
	amazing_prim += prim_num[now];

	if (prim_num[size-1] != '1' && 
		prim_num[size-1] != '2' && 
		prim_num[size-1] != '3' &&
		prim_num[size-1] != '5' &&
		prim_num[size-1] != '7' &&
		prim_num[size-1] != '9')
		return;
	else if (prim_num[0] != '2' && 
		prim_num[0] != '3' &&
		prim_num[0] != '5' &&
		prim_num[0] != '7')
		return;

	
	if (size == 1)
	{
		isAmazingPrim = true;
		return;
	}

	if (isPrim(stoi(amazing_prim)))
	{
		if (now == size-2)
		{
			isAmazingPrim = true;
			return;
		}
		else
			GetAmazingPrim(now + 1, size, amazing_prim);

	}
	else
		return;

}

bool isPrim(int num)
{
	if (num == 1)
		return false;
	else if (num % 2 == 0 && num != 2)
		return false;

    for(int i = 2; i <= sqrtl(num); i++)
    {
        if(num % i == 0) return false;
    }
    return true;
}
