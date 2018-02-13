/*
A palindrome is a word that reads the same backward or forward.

Write a function that checks if a given word is a palindrome. Character case should be ignored.

For example:

isPalindrome("Deleveled") should return true as character case should be ignored, 
Resulting in "deleveled", which is a palindrome since it reads the same backward and forward.
*/

#include <string>
#include <iostream>
using namespace std;

bool isPalindrom(string word)
{
	int len = (word.length() - 1);
	for (int i = 0; i <= len / 2; i++)
		if (word[len - i] != word[i] && word[len - i] != char(word[i] + 32) && char(word[len - i] + 32) != word[i])
			return false;
	return true;
}

int main()
{
	string word = "DeLEelEd";
	
	if (isPalindrom(word) == true)
		cout << "This string is a palindrome." << endl;
	
	else
		cout << "THis is not a palindrom." << endl;

	system("PAUSE");
	return 0;
}

//
//  Created by Muhamed Karajic on February 13, 2018.
//  Copyright © 2018 Muhamed Karajic. All rights reserved.
//