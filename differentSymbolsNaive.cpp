// Given a string, find the number of different characters in it.

// Example

// For s = "cabca", the output should be
// differentSymbolsNaive(s) = 3.

// There are 3 different characters a, b and c.

int differentSymbolsNaive(std::string s) {
    unordered_set<char> mySet;
    
    for(int i = 0; i < s.length(); i++)
        if(mySet.find(s[i]) == mySet.end())
            mySet.insert(s[i]);
    return mySet.size();    
}