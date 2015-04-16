#include<stdio.h>

int main()
{
	int N;	
	int sum = 0;
	int n;
	int i;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &n);
		sum += n;
	}

	printf("%d\n", sum + 1 - N);
	//cout << sum + 1 - N << endl;
	return 0;
}