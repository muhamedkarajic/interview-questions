/*
You are given an array of integers representing coordinates of obstacles situated on a straight line.

Assume that you are jumping from the point with coordinate 0 to the right. 
You are allowed only to make jumps of the same length represented by some integer.

Find the minimal length of the jump enough to avoid all the obstacles.

Example

•For inputArray = [5, 3, 6, 7, 9], the output should be
avoidObstacles(inputArray) = 4.

•For inputArray = [2, 3], the output should be
avoidObstacles(inputArray) = 4.

•For inputArray = [1, 4, 10, 6, 2], the output should be
avoidObstacles(inputArray) = 7.
*/

int maxNumber(const std::vector<int> &inputArray, const int &len)
{
	int max = 0;
	
	for (int i = 0; i<len; i++)
		if (inputArray[i] > max)
			max = inputArray[i];

	return max;
}

bool crashReport(const std::vector<int> &inputArray, const int &base, const int &max, const int &len)
{
	for (int i = 0; i <= max; i += base)
		for (int j = 0; j<len; j++)
			if (i == inputArray[j])
				return false;

	return true;
}

int avoidObstacles(const std::vector<int> &inputArray) 
{
	const int len = inputArray.size();
	const int max = maxNumber(inputArray, len);
	int minimum = max + 1;

	for (int i = max; i > 1; i--)
		if (crashReport(inputArray, i, max, len) == true)
			minimum = i;

	return minimum;
}

//
//  Created by Muhamed Karajic on March 3, 2018.
//  Copyright © 2018 Muhamed Karajic. All rights reserved.
//
