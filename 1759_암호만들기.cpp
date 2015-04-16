#include<iostream>
#include<algorithm>
using namespace std;



int code_size;
int input_size;

char str[MAX_STR];
bool isVisited[MAX_STR];

void make_code(int now); 
int cnt = 0;

int main()
{
	cin >> code_size >> input_size;

	for (int i = 0; i < input_size; i++)
	{
		cin >> str[i];
		isVisited[i] = false;
	}
	
	sort(str, str + input_size);

	make_code(0);
	system("pause");
	return 0;
}

void make_code(int now)
{
	if (now == input_size)
	{
		int vowel_count = 0;
		int consonant_count = 0;
		//cout << now << " " << input_size << endl;
		for (int i = 0; i < input_size; i++)
		{
			if (isVisited[i] == true)
			{
				if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
					vowel_count++;
				else
					consonant_count++;
				cnt++;
			}
		}

		if (cnt == code_size && vowel_count >= 1 && consonant_count >= 2)
		{
			for (int i = 0; i < input_size; i++)
			{
				if (isVisited[i] == true)
					cout << str[i];
			}	
			cout << endl;
		}

		
		cnt = 0;
		return;
	}
	else
	{
		isVisited[now] = true;
		make_code(now+1);
		isVisited[now] = false;
		make_code(now+1);
	}
}