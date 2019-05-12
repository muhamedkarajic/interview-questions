// Given an array of equal-length strings, you'd like to know if it's possible to rearrange the order of the elements in such a way that each consecutive pair of strings 
// differ by exactly one character. Return true if it's possible, and false if not.

// Note: You're only rearranging the order of the strings, not the order of the letters within the strings!

// Example

//     For inputArray = ["aba", "bbb", "bab"], the output should be
//     stringsRearrangement(inputArray) = false.

//     There are 6 possible arrangements for these strings:
//         ["aba", "bbb", "bab"]
//         ["aba", "bab", "bbb"]
//         ["bbb", "aba", "bab"]
//         ["bbb", "bab", "aba"]
//         ["bab", "bbb", "aba"]
//         ["bab", "aba", "bbb"]

//     None of these satisfy the condition of consecutive strings differing by 1 character, so the answer is false.

//     For inputArray = ["ab", "bb", "aa"], the output should be
//     stringsRearrangement(inputArray) = true.

//     It's possible to arrange these strings in a way that each consecutive pair of strings differ by 1 character (eg: "aa", "ab", "bb" or "bb", "ab", "aa"), so return true.


bool testStrings(string myString, string mySubString)
{
    if(myString.length() != mySubString.length())
        return true;
    else if(myString == mySubString)
        return true;
    
    bool test = false;
    for(int i = 0; i < myString.size(); i++)
        if(myString[i] != mySubString[i])
            if(test == false)
                test = true;
            else
                return true;
            
    return false;
}

bool testArray(std::vector<std::string> inputArray)
{
    for(int i = 1; i < inputArray.size(); i++)
        if(testStrings(inputArray[i], inputArray[i-1]))
            return false;
    return true;
}

bool test = false;
void permute(std::vector<std::string> inputArray, int start = 0)
{
	if (start == inputArray.size() && testArray(inputArray))
		test = true;
	else
		for (int i = start; i < inputArray.size(); i++)
		{
			swap(inputArray[i], inputArray[start]);
			permute(inputArray, start + 1);
			swap(inputArray[i], inputArray[start]);
		}
}

bool stringsRearrangement(std::vector<std::string> inputArray) {
    permute(inputArray);
    return test;
}
