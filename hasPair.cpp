/*Given an array of numbers that are in order. 
Write a function that returns true or false,
depending on the facts if a pair of numbers could result in the number that we are
searching for.*/

#include <iostream>
using namespace std;

bool hasPair(int arr[], int n, int number)
{
	int l = 0, r = n - 1;
	for (int i = 0; i < n/2; i++)
		if (arr[l] + arr[r] > number)
			r--;
		else if (arr[l] + arr[r] < number)
			l++;
		else
			return true;
	return false;
}

int main()
{
	const int n = 5;
	int arr[] = { 1,2,3,4,5 };

	if (hasPair(arr, n, 5))
		cout << "true" << endl;
	else
		cout << "false" << endl;

	if (hasPair(arr, n, 10))
		cout << "true" << endl;
	else
		cout << "false" << endl;

	system("PAUSE>0");
	return 0;
}