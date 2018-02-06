/*
Given the string, check if it is a palindrome.
A palindrome is a string that reads the same left-to-right and right-to-left.

Example

•For inputString = "aabaa", the output should be
checkPalindrome(inputString) = true;
•For inputString = "abac", the output should be
checkPalindrome(inputString) = false;
•For inputString = "a", the output should be
checkPalindrome(inputString) = true.
*/


bool checkPalindrome(std::string inputString) {
    int len = inputString.length()-1;
    int half = inputString.length()/2;
    for(int i = 0; i<=half; i++)
        if(inputString[i] != inputString[len--])
            return false;
    return true;
}



//
//  Created by Muhamed Karajic on January 4, 2017.
//  Copyright © 2017 Muhamed Karajic. All rights reserved.
//