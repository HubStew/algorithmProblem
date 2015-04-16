#include<iostream>
#include<algorithm>
using namespace std;

int A[100];
int B[100];
int arr_size;

bool myfunction (int i,int j) { return (i > j); }
int main()
{
	int arr_size;
	cin >> arr_size;
	
	for (int i = 0; i < arr_size; i++)
		cin >> A[i];
	for (int i = 0; i < arr_size; i++)
		cin >> B[i];
	
	sort(A, A+arr_size);
	sort(B, B+arr_size, myfunction);

	int sum = 0;
	for (int i = 0; i < arr_size; i++)
	{
		sum += A[i] * B[i];
		//cout << A[i] * B[i] << " "; 
	}
	cout << sum << endl;
	return 0;
}