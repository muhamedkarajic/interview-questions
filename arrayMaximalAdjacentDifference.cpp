/*
Given an array of integers, find the maximal absolute difference between any two of its adjacent elements.

Example

For inputArray = [2, 4, 1, 0], the output should be
arrayMaximalAdjacentDifference(inputArray) = 3.
*/

/*
Given an array of integers, find the maximal absolute difference between any two of its adjacent elements.

Example

For inputArray = [2, 4, 1, 0], the output should be
arrayMaximalAdjacentDifference(inputArray) = 3.
*/

int returnValue(int a, int b)
{
    if(a*b>0)
        return a-b;
    else if(a<b)
        return b-a;
    else
        return a-b;
}

int arrayMaximalAdjacentDifference(std::vector<int> inputArray) {
    int max = returnValue(inputArray[0], inputArray[1]);
    cout << max << endl;
    
    for(int i = 1; i<inputArray.size()-1; i++)
        if(abs(returnValue(inputArray[i], inputArray[i+1]))>max)
            max = abs(returnValue(inputArray[i], inputArray[i+1]));
    
    return max;
}

//
//  Created by Muhamed Karajic on February 26, 2018.
//  Copyright © 2018 Muhamed Karajic. All rights reserved.
//