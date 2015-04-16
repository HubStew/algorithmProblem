#include<iostream>
using namespace std;

void OperIrredu(int *numer, int *deno)
{
	for (int i = *deno; i >= 2; i--)
	{
		if (*numer % i == 0 && *deno % i == 0)
		{
			*numer /= i;
			*deno/= i;
		}
	}
}

int main()
{
	int Anumer;		// 분자
	int Adeno;		// 분모

	int Bnumer;
	int Bdeno;

	cin >> Anumer >> Adeno >> Bnumer >> Bdeno;

	OperIrredu(&Anumer, &Adeno);
	OperIrredu(&Bnumer, &Bdeno);

	int resultNumer;
	int resultDeno;

	if (Adeno % Bdeno == 0 || Bdeno % Adeno == 0)
	{
		int divDeno;
		if (Adeno > Bdeno)
		{
			divDeno = Adeno / Bdeno;
			resultDeno = Adeno;
			resultNumer = Anumer + Bnumer * divDeno;
		}
		else
		{
			divDeno = Bdeno / Adeno;
			resultDeno = Bdeno;
			resultNumer = Anumer * divDeno + Bnumer;
		}
	}
	else
	{
		resultDeno = Adeno * Bdeno;
		resultNumer = Anumer * Bdeno + Bnumer * Adeno;
	}


	OperIrredu(&resultNumer, &resultDeno);

	cout << resultNumer << " " << resultDeno << endl;

	return 0;
}