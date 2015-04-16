#include<iostream>
#include<cmath>
using namespace std;

// 골드바흐의 추측 이용함 -	2보다 큰 모든 짝수는 두 개의 소수의 합으로 표시할 수 있다
//							이때, 하나의 소수를 두 번 사용하는 것은 허용한다.
// 모든 짝수가 두 소수의 합으로 표현가능하다면, 홀수의 경우 3을 빼면 되고, 
// 짝수의 경우는 2를 빼면 세 소수의 합으로도 표현가능해지기 때문이다.  위키피디아 참조
// 소수를 구하는 최적의 알고리즘이 필요하다

struct prim
{
	int num;
	int isPrim;		// isPrim = 1이면 소수 2면 소수 아님
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
			// 짝수일때
			input_num -= 4;			// 2와 2로 처음 두개 표현 나머지는 계산
			cout << "2 2 ";
		}
		else
		{
			// 홀수일때
			input_num -= 5;			// 2나 3으로 처음 2개 표현 나머지는 계산
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
		//1은 소수가 아니다
		return false;
	}
	else if (x % 2 == 0)
	{
		//짝수는 2만 소수이다
		return x == 2;
	}
	else
	{
		
		int sq = (int)sqrt((double)x)+1;

		//이미 짝수는 제외시켰으므로, [3, sqrt(x)]범위에서 약수가 존재하는지 확인한다.
		for(int i = 3; i <= sq; i += 2)
		{
			if(x % i == 0){
				//약수가 존재한다면 소수가 아니다.
				return false;
			}
		}
	}

	//이때까지 약수가 발견되지 않았다면 소수이다.
	return true;
}
