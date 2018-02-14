/*
You have a string s that consists of English letters, punctuation marks, whitespace characters, and brackets. 
It is guaranteed that the parentheses in s form a regular bracket sequence.

Your task is to reverse the strings contained in each pair of matching parentheses, starting from the innermost pair. 
The results string should not contain any parentheses.

Example

•For string s = "a(bc)de", the output should be
reverseParentheses(s) = "acbde".

•For string s = "a(bcdefghijkl(mno)p)q", the output should be
reverseParentheses(s) = "apmnolkjihgfedcbq".

•For string s = "a(bcdefghijkl(mno)p)q", the output should be
reverseParentheses(s) = "apmnolkjihgfedcbq".

•For string s = "abc(cba)ab(bac)c", the output should be
reverseParentheses(s) = "abcabcabcabc".
*/

std::string reverseParentheses(std::string s) {
    int lastLeftBracket;
    int firstRightBracketAfterLastLeft;
    while(s.find('(')!=-1)
    {
        lastLeftBracket = (int)s.rfind('(');
        firstRightBracketAfterLastLeft = (int)s.find(')', lastLeftBracket);
        std::reverse(s.begin()+lastLeftBracket+1,s.begin()+firstRightBracketAfterLastLeft);
        s.erase(s.begin()+firstRightBracketAfterLastLeft);
        s.erase(s.begin()+lastLeftBracket);
    }    
    return s;
}

//
//  Created by Muhamed Karajic on February 14, 2018.
//  Special thanks to the youtuber Harrian for his videos, that helped me understand the methods that can be used with strings to slow this algorithm.
//