#include<iostream>
#include<string>
using namespace std;

string str_reverse(string str);
bool IsBisymmetry(int number);

// ���ڿ��� �̿��� ����
// �׳� ��Ī�� ���ڵ� �Ȱ��� ����� ó������ ������ ���ϸ� �Ǵ� ���� ���� ���� �˰���

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