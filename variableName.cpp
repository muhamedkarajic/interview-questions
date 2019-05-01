// Correct variable names consist only of English letters, digits and underscores and they can't start with a digit.

// Check if the given string is a correct variable name.

// Example

//     For name = "var_1__Int", the output should be
//     variableName(name) = true;
//     For name = "qq-q", the output should be
//     variableName(name) = false;
//     For name = "2w2", the output should be
//     variableName(name) = false.


bool variableName(std::string name) {
    if(!isalpha(name[0]))
        if(name[0] != '_')
            return false;
    for(int i = 1; i < name.length(); i++)
        if(!isalnum(name[i]))
            if(name[i] != '_')
                return false;
    return true;
}