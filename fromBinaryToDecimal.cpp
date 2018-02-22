/*
Write a program to convert a binary number to decimal number.
*/

#include <iostream>
using namespace std;

int decimal(int number)
{
	int base = 1;
	int decimalNumber = 0;
	while (number > 0)
	{
		if (number%10==1)
			decimalNumber += base;
		base *= 2;
		number /= 10;
	}
	return decimalNumber;
}

int main()
{
	int number;

	cout << "Enter a binary number: ";
	cin >> number;

	cout << "Decimal number: " << decimal(number) << endl;

	system("PAUSE");
	return 0;
}

//
//  Created by Muhamed Karajic on December 30, 2017.
//  Copyright © 2017 Muhamed Karajic. All rights reserved.
//