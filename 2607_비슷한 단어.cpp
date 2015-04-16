#include<iostream>
#include<string>
using namespace std;



void init(int *arr)
{
	for (int i = 0; i < 30; i++)
		arr[i] = 0;
}

bool SameComposion(int *arr1, int *arr2)
{
	for (int i = 0; i < 30; i++)
	{
		//cout << first_count[i] << " " << str_count[i] << endl;
		if (arr1[i] != arr2[i])
			return false;
	}
	return true;
}

int main()
{
	int word_num;
	cin >> word_num;
	string first;
	cin >> first;

	string input;
	
	int first_count[30];
	int str_count[30];

	init(first_count);

	for (int i = 0; i < first.length(); i++)
		first_count[(int)first[i] - 65]++;

	int result_count = 0;
	for (int wn = 0; wn < word_num-1; wn++)
	{
		init(str_count);	

		cin >> input;
		for (int i = 0; i < input.length(); i++)
			str_count[(int)input[i] - 65]++;
		
		int sum = 0;
		/*for (int i = 0; i < 26; i++)
		{
			cout << first_count[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < 26; i++)
		{
			cout << str_count[i] << " " ;
		}
		cout << endl << endl;*/

		if (SameComposion(first_count, str_count) == true)
		{
			result_count++;
		}
		else
		{
			for (int i = 0; i < 30; i++)
			{
				if (first_count[i] - str_count[i] > 0)
					sum += first_count[i] - str_count[i];
				else
					sum += str_count[i] - first_count[i];
			}

			//cout << sum << endl;
			if (sum == 1)		// 문자를 더하거나 뺐을때 같은 구성이 됨
				result_count++;
			else
			{
				// 문자를 바꿨을때 같은 구성이 되는 경우를 찾아야 함
				if (first.length() == input.length())
				{
					if (sum == 2)
						result_count++;
				}
			}
		}
	}
	cout << result_count << endl;

	return 0;
}