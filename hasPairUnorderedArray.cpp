/*Given an array of numbers that are unordered. 
Write a function that returns true or false,
depending on the facts if a pair of numbers could result in the number that we are
searching for.*/

#include <iostream>
#include <unordered_set>
using namespace std;

bool hasPairUnorderedArray(int arr[], int n, int number)
{
	int l = 0, r = n - 1;
	unordered_set<int> comp;
	for (int i = 0; i < n; i++)
		if (comp.find(arr[i]) != comp.end())
			return true;
		else
			comp.insert(number - arr[i]);
	return false;
}

int main()
{
	const int n = 5;
	int arr[] = { 1,2,3,4,5 };

	if (hasPairUnorderedArray(arr, n, 5))
		cout << "true" << endl;
	else
		cout << "false" << endl;

	if (hasPairUnorderedArray(arr, n, 10))
		cout << "true" << endl;
	else
		cout << "false" << endl;

	system("PAUSE>0");
	return 0;
}