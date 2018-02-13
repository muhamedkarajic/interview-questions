/*
Given two strings, find the number of common characters between them.

Example

For s1 = "aabcc" and s2 = "adcaa", the output should be
commonCharacterCount(s1, s2) = 3.

Strings have 3 common characters - 2 "a"s and 1 "c".
*/

int commonCharacterCount(std::string s1, std::string s2) {
    int count = 0;
    for(int i=0; i < s1.length(); i++) {
        for(int j = 0; j < s2.length(); j++) {
            if(s1[i] == s2[j]) {
                count++;
                s2[j] = '*';
                break;
            }
        }
    }
    return count;
}

//
//  Created by Muhamed Karajic on February 13, 2018.
//  Copyright © 2018 Muhamed Karajic. All rights reserved.
//