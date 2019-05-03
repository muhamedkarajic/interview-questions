#include <iostream>
using namespace std;

void swap(char* a, char* b)
{
	char t = *a;
	*a = *b;
	*b = t;
}

void permute(char* a, int l, int r)
{
	if (l == r)
		cout << a << endl;
	else
		for (int i = l; i < r; i++)
		{
			swap((a + l), (a + i));
			permute(a, l + 1, r);
			swap((a + l), (a + i));
		}
}

int main()
{
	char str[] = "ABCD";
	const int n = 4;
	permute(str, 0, 4);

//	OUTPUT:

//	ABCD
//	ABDC
//	ACBD
//	ACDB
//	ADCB
//	ADBC
//	BACD
//	BADC
//	BCAD
//	BCDA
//	BDCA
//	BDAC
//	CBAD
//	CBDA
//	CABD
//	CADB
//	CDAB
//	CDBA
//	DBCA
//	DBAC
//	DCBA
//	DCAB
//	DACB
//	DABC

	system("PAUSE>0");
	return 0;
}