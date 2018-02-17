/*
Given a string, find out if its characters can be rearranged to form a palindrome.

Example

•For inputString = "aabb", the output should be
palindromeRearranging(inputString) = true.

•For inputString = "abbcabb", the output should be
palindromeRearranging(inputString) = true.

•For inputString = "abca", the output should be
palindromeRearranging(inputString) = false.

We can rearrange "aabb" to make "abba", which is a palindrome.
*/

void addToHash(int hashTable[], int number)
{
    for(int i = 0; i<26; i++)
        if(i+97 == number)
        {
            hashTable[i]+=1;
            break;
        }
}


bool properties(int hashTable[], int len)
{
    int oddNumbers = 0;
    
    for(int i = 0; i<26; i++)
        if(hashTable[i] %2 != 0)
            oddNumbers++;
    
    if(oddNumbers == 1 && len %2!=0)
        return true;
    else if(oddNumbers == 0 && len%2==0)
        return true;
    else
        return false;
}

bool palindromeRearranging(std::string inputString)
{
    int hashTable[26] = {};
    for(int i = 0; i<inputString.length(); i++)
        addToHash(hashTable,(int)inputString[i]);
    
    return properties(hashTable,inputString.length());
}

//
//  Created by Muhamed Karajic on February 17, 2018.
//  Copyright © 2018 Muhamed Karajic. All rights reserved.
//
