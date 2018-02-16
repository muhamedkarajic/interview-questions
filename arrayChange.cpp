/*
You are given an array of integers. On each move you are allowed to increase exactly one of its element by one. 
Find the minimal number of moves required to obtain a strictly increasing sequence from the input.

Example

•For inputArray = [1, 1, 1], the output should be
arrayChange(inputArray) = 3.

•For inputArray = [2, 3, 3, 5, 5, 5, 4, 12, 12, 10, 15], the output should be
arrayChange(inputArray) = 13.
The Array would look like inputArray = [2, 3, 4, 5, 6, 7, 8, 12, 13, 14, 15].
*/

int arrayChange(std::vector<int> inputArray) {
    int sum = 0;
    for(int i = 0; i<inputArray.size()-1; i++)
    {
        
        if(inputArray[i] >= inputArray[i+1])
        {
            sum+=(inputArray[i+1] + inputArray[i] - inputArray[i+1] +1)-inputArray[i+1];
            inputArray[i+1] += inputArray[i] - inputArray[i+1] +1;
        }
    }
    return sum;
}

//
//  Created by Muhamed Karajic on February 17, 2018.
//  Copyright © 2018 Muhamed Karajic. All rights reserved.
//