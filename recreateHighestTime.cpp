/*
The user is inserting 8 numbers, from thouse numbers you should recreate the higgest time possible, 
where 23:59:59 is the higest and 00:00:00 is the lowest.
The output of the time should be hh:mm:ss.
*/

#include <iostream>
using namespace std;

class Time
{
public:
	int hours;
	int minutes;
	int seconds;

	void Print()
	{
		if (hours < 10)
			cout << '0';
		cout << hours << ":";
		if (minutes < 10)
			cout << '0';
		cout << minutes << ":";
		if (seconds < 10)
			cout << '0';
		cout << seconds << endl;

	}

	Time(int hours = 23, int minutes = 59, int seconds = 59) 
		: hours(hours), minutes(minutes), seconds(seconds)
	{}

	void operator--()
	{
		if (seconds > 0)
			seconds--;
		else
		{
			seconds = 59;
			if (minutes > 0)
				minutes--;
			else
			{
				minutes = 59;
				if (hours > 0)
					hours--;
				else
					hours = 23;
			}
		}
	}

	bool operator==(Time t) const
	{
		return t.hours == hours && t.minutes == minutes && t.seconds == seconds;
	}

	bool operator!=(Time t) const
	{
		return !(t == *this);
	}
};

bool recreateHighestTime(int arr[], int n, Time &t)
{
	int temp[10] = { 0 };
	for (int i = 0; i < 10; i++)
		temp[i] = arr[i];

	Time x(0, 0, 0);
	int c;
	bool test = false;

	while (t != x)
	{
		test = false;
		c = t.hours % 10;
		if (arr[c] >= 1)
			arr[c]--;
		else
			test = true;

		c = t.hours / 10;
		if (arr[c] >= 1)
			arr[c]--;
		else
			test = true;


		c = t.minutes % 10;
		if (arr[c] >= 1)
			arr[c]--;
		else
			test = true;

		c = t.minutes / 10;
		if (arr[c] >= 1)
			arr[c]--;
		else
			test = true;

		c = t.seconds % 10;
		if (arr[c] >= 1)
			arr[c]--;
		else
			test = true;

		c = t.seconds / 10;
		if (arr[c] >= 1)
			arr[c]--;
		else
			test = true;

		if (!test)
		{
			t.Print();
			return true;
		}
		--t;
		for (int i = 0; i < 10; i++)
			 arr[i] = temp[i];
	}
	t.Print();
	return false;
}

int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
		arr[i] = 0;

	int i = 0, input;
	do {
		cin >> input;
		arr[input]++;
		i++;
	} while (i < 8);

	Time t;
	createTime(arr, 9, t);

	system("PAUSE>0");
}