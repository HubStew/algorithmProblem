#include<iostream>
#include<cmath>
using namespace std;

// �������� ���� �̿��� -	2���� ū ��� ¦���� �� ���� �Ҽ��� ������ ǥ���� �� �ִ�
//							�̶�, �ϳ��� �Ҽ��� �� �� ����ϴ� ���� ����Ѵ�.
// ��� ¦���� �� �Ҽ��� ������ ǥ�������ϴٸ�, Ȧ���� ��� 3�� ���� �ǰ�, 
// ¦���� ���� 2�� ���� �� �Ҽ��� �����ε� ǥ������������ �����̴�.  ��Ű�ǵ�� ����
// �Ҽ��� ���ϴ� ������ �˰����� �ʿ��ϴ�

struct prim
{
	int num;
	int isPrim;		// isPrim = 1�̸� �Ҽ� 2�� �Ҽ� �ƴ�
};

prim *prim_num;

void init(int size);
bool isPrime(int x);
void get_prim_num(int size);

int main()
{

	int input_num;
	cin >> input_num;

	int first = 0;
    int second = 0;

	if (input_num < 8)
		cout << "-1" << endl;
	else
	{
		if (input_num % 2 == 0)
		{
			// ¦���϶�
			input_num -= 4;			// 2�� 2�� ó�� �ΰ� ǥ�� �������� ���
			cout << "2 2 ";
		}
		else
		{
			// Ȧ���϶�
			input_num -= 5;			// 2�� 3���� ó�� 2�� ǥ�� �������� ���
			cout << "2 3 ";
		}
		//cout << "input " << input_num << endl;;

		prim_num = new prim[input_num+1];

		init(input_num);
		//get_prim_num(input_num);
		
	 
        bool isBreak = false;
        for (int i = input_num; i > 0; i--)
        {
            if (prim_num[i].isPrim == 1)
            {
                for (int j = 1; j <= input_num; j++)
                {
                    if (prim_num[j].isPrim == 1)
                    {
                        first = prim_num[i].num;
                        second = prim_num[j].num;
 
                    if (first + second == input_num)
                        {
 
                            isBreak = true;
                            break;
                        }
                    }
                }
            }
 
            if (isBreak == true)
                break;
        }
        cout << first << " " << second << endl;
    }


	return 0;
}

void init(int size)
{
	for (int i = 1; i <= size; i++)
	{
		prim_num[i-1].num = i;
		prim_num[i-1].isPrim = isPrime(i);
	}
}

/*
void get_prim_num(int size)
{
	int first = 0;
	int second = 0;
	int count = 0;

	for (int i = 2; i <= size; i++)
	{
		if (prim_num[i].isPrim == 0)
		{
			prim_num[i].isPrim = 1;
			
			for (int j = i+1; j < size; j++)
			{
				if (prim_num[j].isPrim == 0 
					&& prim_num[j].num % prim_num[i].num == 0 )
				{
					prim_num[j].isPrim = 2;
					
				} else
				{
					//cout << prim_num[i].num << " " << prim_num[j].num << endl;
				}
				count++;
			}
		}
	}

}*/

bool isPrime(int x)
{ 

	if ( x <= 1)
	{    
		//1�� �Ҽ��� �ƴϴ�
		return false;
	}
	else if (x % 2 == 0)
	{
		//¦���� 2�� �Ҽ��̴�
		return x == 2;
	}
	else
	{
		
		int sq = (int)sqrt((double)x)+1;

		//�̹� ¦���� ���ܽ������Ƿ�, [3, sqrt(x)]�������� ����� �����ϴ��� Ȯ���Ѵ�.
		for(int i = 3; i <= sq; i += 2)
		{
			if(x % i == 0){
				//����� �����Ѵٸ� �Ҽ��� �ƴϴ�.
				return false;
			}
		}
	}

	//�̶����� ����� �߰ߵ��� �ʾҴٸ� �Ҽ��̴�.
	return true;
}
