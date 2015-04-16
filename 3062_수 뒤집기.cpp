#include<iostream>
#include<string>
using namespace std;

string str_reverse(string str);
bool IsBisymmetry(int number);

// 문자열을 이용한 문제
// 그냥 대칭인 숫자도 똑같이 뒤집어서 처음수와 같은가 비교하면 되는 것이 가장 좋은 알고리즘

int main()
{
	int testCase;
	cin >> testCase;

	while(testCase--)
	{
		string input_str;
		string reverse_str = "";

		cin >> input_str;
		reverse_str = str_reverse(input_str);

		int number = stoi(input_str);
		int rev_number = stoi(reverse_str);

		int sum = number + rev_number;

		if (IsBisymmetry(sum) == true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}

string str_reverse(string str)
{
	string temp = "";
	for (int i = str.length()-1 ; i >= 0; i--)
	{
		temp += str[i];
	}

	return temp;
}

bool IsBisymmetry(int number)
{
	string s = to_string((long long)number);

	for (int i = 0; i < s.length()-1 / 2; i++)
	{
		if (s[i] != s[s.length()-1 -i])
			return false;
	}

	return true;

}