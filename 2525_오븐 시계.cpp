#include <iostream>
using namespace std;

void input(int &hour, int &minute, int &cookTime);
int getCookHour(int cookTime);
int getCookMinute(int cookTime);

int main()
{
	int hour = 0;
	int minute = 0;
	int cookTime = 0;

	input(hour, minute, cookTime);

	minute += getCookMinute(cookTime);
	hour += getCookHour(cookTime);

	if (minute >= 60)
	{
		hour++;
		minute = minute % 60;
	}

	if (hour >= 24)
	{
		hour = hour % 24;
	}

	cout << hour << " " << minute << endl;
	 
	return 0;
}


void input(int &hour, int &minute, int &cookTime)
{
	cin >> hour >> minute >> cookTime;
}

int getCookHour(int cookTime)
{
	return cookTime / 60;
}
int getCookMinute(int cookTime)
{
	return cookTime % 60;
}