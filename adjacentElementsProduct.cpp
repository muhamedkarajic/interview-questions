/*
Given an array of integers, find the pair of adjacent elements that has the largest product and return that product.

Example

•For inputArray = [3, 6, -2, -5, 7, 3], the output should be
adjacentElementsProduct(inputArray) = 21.
*/

//The Array in this case can't be zero or less then two.
int adjacentElementsProduct(std::vector<int> inputArray) {
    int len = inputArray.size()-1;    
    int sum = inputArray[0]*inputArray[1];
    
    for(int i = 1; i<len; i++)
    {
        if(inputArray[i]*inputArray[i+1] > sum)
        {
            sum = inputArray[i]*inputArray[i+1];
        }
    }
    return sum;
}


//
//  Created by Muhamed Karajic on January 4, 2017.
//  Copyright © 2017 Muhamed Karajic. All rights reserved.
//