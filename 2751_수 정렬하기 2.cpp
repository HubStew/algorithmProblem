#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
 
int arr[1000001];
 
int main()
{
    int size;
    cin >> size;
 
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
 
	sort(arr, arr+size);
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
 
    //cout << endl;
 
    return 0;
}
