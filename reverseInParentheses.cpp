// Write a function that reverses characters in (possibly nested) parentheses in the input string.

// Input strings will always be well-formed with matching ()s.

// Example

//     For inputString = "(bar)", the output should be
//     reverseInParentheses(inputString) = "rab";

//     For inputString = "foo(bar)baz", the output should be
//     reverseInParentheses(inputString) = "foorabbaz";

//     For inputString = "foo(bar)baz(blim)", the output should be
//     reverseInParentheses(inputString) = "foorabbazmilb";


string reverseString(string& inputString, int from, int to)
{
	string newString;
	for (int i = to - 1; i >= from; i--)
		if (inputString[i] == ')')
			newString += '(';
		else if (inputString[i] == '(')
			newString += ')';
		else
			newString += inputString[i];
	return newString;
}

int findClosing(string inputString, const int& start)
{
	int brojac = 0;
	int length = inputString.length();
	for (int i = start; i < length; i++)
		if (inputString[i] == '(')
			brojac++;
		else if (inputString[i] == ')' && brojac == 0)
			return i;
		else if (inputString[i] == ')')
			brojac--;
	return -1;
}


std::string reverseInParentheses(std::string inputString) {
    string newString;
	bool test = true;

	while (test)
	{
		test = false;
		newString = "";
		for (int i = 0; i < inputString.length(); i++)
			if (inputString[i] == '(')
			{
				test = true;
				int x = findClosing(inputString, i + 1);
				newString += reverseString(inputString, i + 1, x);
				i = x;
			}
			else
				newString += inputString[i];
		inputString = newString;
	}

	return newString;
    
}
