/*
Given two arrays of chars, find out how many times dose the bigger array that represents a sentance contain the smaller array that represents a word.
*/

#include <iostream>
using namespace std;

bool checkSentence(char sentence[], int sentenceLength, char word[],int wordLength, int position)
{
	for (int i = 0; i < wordLength && sentence[i + position + 1] != ' ' && sentence[i + position + 1] != '.' && position <= 200; i++)
		if (sentence[i + position] != word[i])
			return false;
	return true;
}

int wordCounter(char sentence[], int sentenceLength, char word[], int wordLength)
{
	int counter = 0;
	for (int i = 0; i < sentenceLength; i++)
	{
		if (sentence[i] == word[i])
			if (checkSentence(sentence, sentenceLength, word, wordLength, i) == true)
				counter++;
	}
	return counter;
}

int main()
{
    const int sentenceLength = 200, wordLength = 7;
	char sentence[sentenceLength] = { "The Old Bridge in Mostar is not the only bridge."};
	char word[wordLength] = { "bridge" };

	cout << "Number of times that the word is contained in the sentance: " << wordCounter(sentence, sentenceLength, word, wordLength) << endl;

	system("PAUSE");
	return 0;
}

//
//  Created by Muhamed Karajic on January 27, 2018.
//  Copyright © 2018 Muhamed Karajic. All rights reserved.
//