#include<iostream>
#include<algorithm>
using namespace std;

int arr[100000];
bool binary_search(int n, int size);

int main()
{
	int size;
	cin >> size;

	for (int i = 0; i < size; i++)
		cin >> arr[i];

	sort(arr, arr + size);

	int testCase;
	cin >> testCase;

	int n;
	while(testCase--)
	{
		cin >> n;
		cout << binary_search(n, size) << endl;
		
	}

	return 0;
}

bool binary_search(int n, int size)
{
	int front = 0, tail = size-1;
	int mid;

	while(front <= tail)
	{
		//cout << arr[mid] << " " <<  n << " " << front << " " << mid << " " << tail << endl;

		mid = (front + tail) / 2;

		if (arr[mid] > n)
		{
			tail = mid-1;
		}
		else if (arr[mid] < n)
		{
			front = mid+1;
		}
		else
			return 1;

	}
	return 0;
}