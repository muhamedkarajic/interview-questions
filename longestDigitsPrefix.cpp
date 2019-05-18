// Given a string, output its longest prefix which contains only digits.

// Example

// For inputString = "123aa1", the output should be
// longestDigitsPrefix(inputString) = "123".

// Input/Output

//     [execution time limit] 0.5 seconds (cpp)

//     [input] string inputString

//     Guaranteed constraints:
//     3 ≤ inputString.length ≤ 100.

std::string longestDigitsPrefix(std::string inputString) {
    string longest;
    unordered_set<string> set;
    
    for(char& i:inputString)
        if(isdigit(i))
            longest += i;
        else
            return longest;
    return longest;
}
