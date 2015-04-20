#include<iostream>
#include<algorithm>
using namespace std;

struct Nation
{
	int name;
	int gold;
	int silver;
	int bronze;
	int grade;
};

int cmp(const Nation a, const Nation b)
{
	return a.gold > b.gold 
		|| (a.silver > b.silver && a.gold == b.gold) 
		|| (a.bronze > b.bronze && a.silver == b.silver && a.gold == b.gold);
}

Nation nation[10001];

int main()
{
	int nationNum;
	int k;
	cin >> nationNum >> k;

	for (int i = 1; i <= nationNum; i++)
	{
		cin >> nation[i].name >> nation[i].gold >> nation[i].silver >> nation[i].bronze;
	}

	sort(nation + 1, nation + nationNum + 1, cmp);
	

	nation[1].grade = 1;
			//cout << nation[1].name << " " << nation[1].gold << " " << nation[1].silver << " " << nation[1].bronze << " " << nation[1].grade << endl;
	for (int i = 1; i <= nationNum; i++)
	{				

		if (nation[i-1].gold == nation[i].gold &&
			nation[i-1].silver == nation[i].silver &&
			nation[i-1].bronze == nation[i].bronze)
		{
			nation[i].grade = nation[i-1].grade;
		}
		else
		{
			nation[i].grade = i;
		}

		if (nation[i].name == k)
			cout << nation[i].grade << endl;
		//cout << nation[i].name << " " << nation[i].gold << " " << nation[i].silver << " " << nation[i].bronze << " " << nation[i].grade << endl;

	}



	return 0;
}