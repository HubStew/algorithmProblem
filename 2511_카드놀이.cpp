#include<iostream>
using namespace std;


int main()
{
	int A_score[10];
	int B_score[10];
	int result_score[10];


	for (int i = 0; i < 10; i++)
		cin >> A_score[i];

	for (int i = 0; i < 10; i++)
		cin >> B_score[i];

	for (int i = 0; i < 10; i++)
		result_score[i] = A_score[i] - B_score[i];

	int A_count = 0;
	int B_count = 0;
	int draw = 0;

	int draw_count = 0;
	for (int i = 0; i < 10; i++)
	{
		if (result_score[i] > 0)
		{
			A_count += 3;
			draw = i;
		} 
		else if (result_score[i] < 0)
		{
			B_count += 3;
			draw = i;
		}
		else
		{
			B_count++;
			A_count++;			
			draw_count++;
		}
	}

	cout << A_count << " " << B_count << endl;
	if (A_count > B_count)
		cout << "A" << endl;
	else if (A_count < B_count)
		cout << "B" << endl;
	else
	{
		if (draw_count == 10)
			cout << "D" << endl;
		else
		{
			if (result_score[draw] > 0)
				cout << "A" << endl;
			else if (result_score[draw] < 0)
				cout << "B" << endl;
		}
	}


	return 0;
}