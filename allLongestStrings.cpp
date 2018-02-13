/*
Given an array of strings, return another array containing all of its longest strings.

Example

For inputArray = ["aba", "aa", "ad", "vcd", "aba"], the output should be
allLongestStrings(inputArray) = ["aba", "vcd", "aba"].
*/

std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
    int longestLength = inputArray[0].length();
    
    for(int i = 1; i<inputArray.size(); i++)
        if(inputArray[i].length() > longestLength)
            longestLength = inputArray[i].length();
        else if(inputArray[i].length()<longestLength)
            inputArray.erase(inputArray.begin()+i--);
    
    for(int i = 0; i<inputArray.size(); i++)
        if(inputArray[i].length() < longestLength)
            inputArray.erase(inputArray.begin()+i--);
    
    return inputArray;
}

//
//  Created by Muhamed Karajic on February 10, 2018.
//  Copyright © 2018 Muhamed Karajic. All rights reserved.
//