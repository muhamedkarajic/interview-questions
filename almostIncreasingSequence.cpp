/*
Given a sequence of integers as an array, determine whether it is possible to obtain a strictly increasing sequence by removing no more than one element from the array.

Example

•For sequence = [1, 3, 2, 1], the output should be
almostIncreasingSequence(sequence) = false;

There is no one element in this array that can be removed in order to get a strictly increasing sequence.

•For sequence = [1, 3, 2], the output should be
almostIncreasingSequence(sequence) = true.

You can remove 3 from the array to get the strictly increasing sequence [1, 2]. Alternately, you can remove 2 to get the strictly increasing sequence [1, 3].
*/

bool almostIncreasingSequence(std::vector<int> sequence)
{
	bool available = true;
	int len = sequence.size() - 1;

	for (int i = 1; i <= len; i++)
	{
		if (sequence[i] <= sequence[i - 1])
		{
			if (!available)
                return false;
			if (i == len)
                return true;
			if (i > 1)
			{
				if (sequence[i + 1] <= sequence[i - 2])
                    return false;
				bool test = (sequence[i - 2] < sequence[i - 1] && sequence[i - 1] < sequence[i + 1]) || (sequence[i - 2] < sequence[i] && sequence[i] < sequence[i + 1]);
				if (!test)
                    return false;
			}
			available = false;
		}
	}
	return true;
}

//
//  Created by Muhamed Karajic on February 8, 2018.
//  Copyright © 2018 Muhamed Karajic. All rights reserved.
//
