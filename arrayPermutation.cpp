#include <iostream>
using namespace std;

void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << ", ";
	cout << endl;
}

void permute(int arr[], int start, int n)
{
	if (start == n)
		print(arr, n);
	else
		for (int i = start; i < n; i++)
		{
			swap(arr[i], arr[start]);
			permute(arr, start + 1, n);
			swap(arr[i], arr[start]);
		}
}

int main()
{
	int arr[3] = { 1,2,3 };
	permute(arr, 0, 3);
	
	system("PAUSE>0");
	return 0;
}