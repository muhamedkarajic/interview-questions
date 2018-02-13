/*
Ticket numbers usually consist of an even number of digits. A ticket number is considered lucky if the sum of the first half of the digits is equal to the sum of the second half.

Given a ticket number n, determine if it's lucky or not.

Example

•For n = 1230, the output should be
isLucky(n) = true;
•For n = 239017, the output should be
isLucky(n) = false.
*/

int countNumbers(int n)
{
    int counter = 0;
    while(n>0)
    {
        n/=10;
        counter++;
    }
    return counter;
}

bool isLucky(int n) {
    int len = countNumbers(n);
    int s1=0, s2=0;
    
    for(int i = 0; i<len; i++)
    {
        if(i<len/2)
            s1 += n%10;
        else
            s2 += n%10;
        n/=10;
    }
    return s1 == s2;
}

//
//  Created by Muhamed Karajic on February 13, 2018.
//  Copyright © 2018 Muhamed Karajic. All rights reserved.
//
