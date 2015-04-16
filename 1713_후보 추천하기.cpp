#include<iostream>
#include<algorithm>
using namespace std;

struct STUDENT
{
	int name;
	int count;
	int turn;
};

//STUDENT student[105]; 
STUDENT frame[1000];

void printFrame(int frameSize);
int stuInFrame(int stuNum, int frameSize);

int cmp(STUDENT a, STUDENT b)
{
	if (a.count == b.count)
		return a.turn > b.turn;
	else
		return a.count > b.count;
}



int nameCmp(STUDENT a, STUDENT b)
{
	return a.name < b.name;
}

int main()
{
	int frameNum;
	int studentNum;

	int num;

	cin >> frameNum >> studentNum;

	int frameIndex = 1;

	for (int i = 1; i <= studentNum; i++)
	{
		cin >> num;

		if (frameNum < i)
		{
			if (stuInFrame(num, frameNum) != -1)
			{
				frame[stuInFrame(num, frameNum)].count++;
				frame[stuInFrame(num, frameNum)].turn = i;
			}
			else
			{
				frame[frameNum].name = num;
				frame[frameNum].count = 1;
				frame[frameNum].turn = i;
			}

			sort(frame+1, frame + frameNum+2 , cmp);

			//printFrame(frameNum);
		}
		else
		{
			frame[frameIndex].name = num;
			frame[frameIndex].count++;
			frame[frameIndex].turn = i;

			//sort(frame+1, frame + frameNum+2 , cmp);

			//printFrame(frameNum);
			frameIndex++;
		}
	}

	sort(frame, frame + frameNum, nameCmp);
	for (int i = 1; i <= frameNum; i++)
	{
		cout << frame[i].name << " ";
	}
	cout << endl;


	return 0;
}

void printFrame(int frameSize)
{
	for (int i = 1; i <= frameSize; i++)
		cout << frame[i].name << " " << frame[i].count << " "
			 << frame[i].turn << endl;
	cout << endl;
}

int stuInFrame(int stuNum, int frameSize)
{
	for (int i = 1; i <= frameSize; i++)
	{
		if (frame[i].name == stuNum)
			return i;
	}
	return -1;
}