#include<iostream>
#include<string>
using namespace std;

int main()
{
	string jehwan;
	string doctor;

	cin >> jehwan >> doctor;

	if (jehwan.size() >= doctor.size())
		cout << "go" << endl;
	else
		cout << "no" << endl;

	return 0;
}