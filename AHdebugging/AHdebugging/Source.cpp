/*
	Amariah Harper
	Spring 2022 Submisssion
	Debugging Code Hunter
*/
#include <iostream>
#include <string>

using namespace std;


int main()
{
	string textToAnalyze;//varible representing the text the user enters
	//int foo = 0; //varible is not used
	int vowels = 0; //varible used to find the amount of vowls entered
	int consonants = 0; //varible used to find the amount of consonants entered
	int digits = 0; //varible used to find the amount of integers entered
	int spaces = 0; //varible used to find the amount of spaces entered
	int lengthOfStringSubmittedForAnalysis = 0; //varible used to find the total amount of characters entered
	int unknownCharacters = 0; // varible used to find the amount of characters that the program wasn't made to identify
	int checkSum = 0; //varible used to check if all of the vowels, consonants, digits, spaces, and unknown characters were counted correctly
	//int bar = 0; //varible is not used

	cout << "Welcome to the CIA Code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	getline(cin, textToAnalyze); //gets the users input

	for (int i = 0; i < textToAnalyze.length(); ++i) //a loop that will check every character contained in the users input
	{
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{//checks for vowels first. adds 1 to int vowels for every vowl it dectects
			++vowels;
		}
		else if ((textToAnalyze[i] >= 'a' && textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A' && textToAnalyze[i] <= 'Z'))
		{//characters unaccounted for in the search for vowels will be checked. 
			//adds 1 to int consonants for every letter that was left out of the previous search.
			++consonants;
		}
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{// checks the characters that didn't fit the requirements of the previous checks. 
			//adds 1 to int digits for every integer detected 
			++digits;
		}
		else if (textToAnalyze[i] == ' ')
		{//checks the characters that didn't fit the requirements of the previous checks. 
			//adds 1 to int spaces for every space detected
			++spaces;
		}
		else
		{//checks the characters that didn't fit the requirements of the previous checks. 
			//adds 1 to int unknownCharaters for every character dectected
			++unknownCharacters;
		}
	}

	lengthOfStringSubmittedForAnalysis = textToAnalyze.length(); //changes the value of lengthOfStringSubmittedForAnalysis 
																//to the amount of characters entered
	checkSum = unknownCharacters + vowels + consonants + digits + spaces; //changes the value of checkSum 
																		//to the total amount of character found in the loop above

	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{ //checks if the amount of characters entered matches the amount of characters dectected by the loop 
		//and tells us whether or not the program was successful
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	system("pause");

	return 0;
}