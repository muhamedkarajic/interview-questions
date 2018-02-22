/*
The Greatest Common Divisor of two positive integers is the largest integer that divides both without remainder.
Write a method that returns the Greatest Common Divisor of the first and second number.
*/

#include <iostream>
using namespace std;

int greatestCommonDivisor(int first, int second)
{
	int divisor;

	if (second%first==0)
		return second;

	for (int i = second*first; i >= first; i--)
		if (i%first==0 && i%second == 0)
			divisor = i;

	return divisor;
}

int main()
{
	int first, second;

	cout << "Enter the first number: ";
	cin >> first;
	
	cout << "Enter the second number: ";
	cin >> second;

	if (first > second)
	{
		int temp = first;
		first = second;
		second = temp;
	}


	cout << "Greatest Common Divisor: " << greatestCommonDivisor(first, second) << endl;

	system("PAUSE");
	return 0;
}

//
//  Created by Muhamed Karajic on December 31, 2017.
//  Copyright © 2017 Muhamed Karajic. All rights reserved.
//