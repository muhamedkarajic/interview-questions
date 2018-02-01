//
//  Created by Muhamed Karajic on January 17, 2018.
//  Copyright © 2018 Muhamed Karajic. All rights reserved.
//


/*
Napisati program koji će omogućiti:
•	Unos 2D niza od 10x10 elemanata vodeći računa da su svi elementi dvocifreni (ukoliko unos nekog elementa ne zadovoljava uslov, ponavljati unos tog elementa dok se ne zadovolji uslov) – Koristiti funkciju unos
•	Izvršiti transpoziciju niza tako što će se zamjeniti redovi i kolone – Koristiti funkciju transpose, a zatim na osnovu izmijenjenog 2D niza:
	•	Izračunati aritmetičku sredinu svih prostih brojeva ispod sporedne dijagonale – Koristiti dvije funkcije: aritmeticka i prost_broj (pozivati će se iz funkcije aritmeticka)
	•	Napisati funkciju simpatican koja će provjeriti da li su brojevi iznad sporedne dijagonale simpatični*.
*/

#include <iostream>
using namespace std;

const int length = 5;

void print(int array[][length])
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void transpose(int array[][length])
{
	int temp;
	for (int i = 0; i<length; i++) 
	{
		for (int j = 0; j!=i; j++) 
		{
				temp = array[i][j];
				array[i][j] = array[j][i];
				array[j][i] = temp;
		}
	}
}

int main()
{
	int array[length][length] = {
							10,11,12,13,14,
							20,21,22,23,24,
							30,31,32,33,34,
							40,41,42,43,44,
							50,51,52,53,54
						};
	
	print(array);
	transpose(array);
	print(array);

	system("PAUSE");
	return 0;
}