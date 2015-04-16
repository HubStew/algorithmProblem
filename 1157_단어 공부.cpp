#include<iostream>
#include<string>
using namespace std;


int main()
{
	string str;
	// A~Z = 65 0~31, a~z = 31~63
	int charCount[32];
	cin >> str;
	
	for (int i = 0; i < 32; i++)
		charCount[i] = 0;

	for (int i = 0; i < str.size(); i++)
	{
		if ((int)str[i] < 97)
			charCount[(int)str[i] % 65]++;
		else
			charCount[(int)str[i] % 97]++;
		
	}

	int my_max = 0;
	bool flag = false;
	char out;
	for (int i = 0; i < 32; i++)
	{
		if (charCount[i] > my_max)
		{
			out = (char)(i + 65);
			my_max = charCount[i];
			flag = false;
		}
		else if (charCount[i] == my_max)
			flag = true;
	}

	
	if (flag == true)
		cout << "?" << endl;
	else
	{
		cout << out << endl;
	}


	return 0;
}