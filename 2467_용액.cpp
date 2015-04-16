#include<iostream>
#include<algorithm>
using namespace std;
 
#define MAX_SIZE 100000
 
int my_abs(int num)
{
    if (num >= 0)
        return num;
    else
        return num * -1;
}

int absCmp(int a, int b)
{
	a = my_abs(a);
	b = my_abs(b);
	return a < b;
}
 
int main()
{
    int size;
    cin >> size;

	int arr[MAX_SIZE];
	
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr+ size, absCmp);

	int result1, result2;
	int minNum = 999999999;
	for (int i = 1; i < size; i++)
	{
		//cout << arr[i-1] << " " << arr[i] << endl;
		if (minNum > my_abs(arr[i-1] + arr[i]))
		{
			result1 = arr[i-1];
			result2 = arr[i];

			minNum = my_abs(arr[i-1] + arr[i]);
		}
	}

	if (result1 > result2)
		cout << result2 << " " << result1 << endl;
	else
		cout << result1 << " " << result2 << endl;

    return 0;
}
