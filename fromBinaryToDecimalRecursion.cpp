/*
Write a program to convert a binary number to decimal number using recursion.
*/

#include <iostream>
using namespace std;

int decimalNumber(int number, int base)
{
	if (number == 1)
		return base;
	else
		return (base * (number % 10)) + decimalNumber(number / 10, base * 2);
}

int main()
{
	cout << "101010110" << " = " << decimalNumber(101010110, 1) << endl;

	system("PAUSE");
	return 0;
}

//
//  Created by Muhamed Karajic on March 1, 2018.
//  Copyright © 2018 Muhamed Karajic. All rights reserved.
//