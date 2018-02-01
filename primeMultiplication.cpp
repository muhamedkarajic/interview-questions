//
//  Created by Muhamed Karajic on December 4, 2017.
//  Copyright © 2017 Muhamed Karajic. All rights reserved.
//

/*Napišite program, koji omogućava da unese prirodni number number i u slučaju
da number nije prime (number koji je djeljiv samo sa 1 i sa samim sobom)
potrebno ga je rastaviti na proste faktore. Svaki složeni number se može rastaviti
na proste faktore (numbereve) koji množenjem daju taj number.

48=2*2*2*2*3
100=2*2*5*5
60=2*2*3*5*/

//Wikipedia: A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.


#include <iostream>
using namespace std;

bool prime(int number)
{
	if (number == 2 || number == 3 || number == 5 || number == 7)
		return true;

	else if (number % 2 == 0 || number % 3 == 0 || number % 5 == 0 || number % 7 == 0)
		return false;

	else
	{
		int root = sqrt(number);
		for (int i = 5; i <= root; i += 6)
		{
			if (number%i == 0)
			{
				return false;
			}
		}
	}
	return true;
}

void output(int number) {
	for (int i = 2; number>1; i++)
	{
		if (prime(i) == true) {
			while (number%i == 0)
			{
				cout << i << " ";
				number /= i;
			}
		}
	}
}

int main() {
	int number;

	cout << "Enter a number: ";
	cin >> number;

	if (prime(number) == true) 
		cout << "This is a prime number." << endl;

	else
		output(number);
	
	cout << endl;
	system("PAUSE");
	return 0;
}

/*
I would like to thank here Selimović Adela for helping me understand the 
prime number logic behind this code, which was her optimization and math logic.
*/