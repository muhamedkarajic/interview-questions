// Given a string, replace each of its character by the next one in the English alphabet (z would be replaced by a).

// Example

// For inputString = "crazy", the output should be
// alphabeticShift(inputString) = "dsbaz".

std::string alphabeticShift(std::string inputString) {
    for(int i = 0; i < inputString.length(); i++)
        if(inputString[i] == 'z')
            inputString[i] = 'a';
        else
            inputString[i]++;
    return inputString;
}
