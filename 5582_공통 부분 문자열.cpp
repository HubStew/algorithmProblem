#include<iostream>
#include<string>
using namespace std;

int main()
{

	string large_str;
	string small_str;
	cin >> large_str >> small_str;

	if (small_str.length() > large_str.length())
		swap(small_str, large_str);

	int tempI = 0;
	string tempStr = "";

	int max_result = 0;
	int time_count = 0;

	for (int i = small_str.length() - 1; i >= 0; i--)
	{

		for (int j = 0; j < small_str.length() ; j++)
		{

			if (max_result >= i - j + 1)
			{
				break;
			}

			/*for (int k = j; k <= i; k++)
			{
				//cout << small_str[k] << " ";
				tempStr += small_str[k];
				continue;
			}*/
			
			tempStr = small_str.substr(j, i - j + 1);

			if (max_result < tempStr.length() && large_str.find(tempStr) != string::npos) {
				//cout << "match" << endl;
				//if (max_result < tempStr.length())
					max_result = tempStr.length();
				break;
			}
			
			//cout << tempStr << endl;
			time_count++;
			tempStr = "";
		}

	}

	//cout << time_count << " ";
	cout << max_result << endl;
	return 0;
}

