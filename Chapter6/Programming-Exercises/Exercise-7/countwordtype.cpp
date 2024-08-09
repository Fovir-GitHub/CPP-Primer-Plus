// Write a program that reads input a word at a time until a lone q
// is entered.The program should then report the number of words
// that began with vowels, the num - ber that began with consonants,
// and the number that fit neither of those categories.
// One approach is to use isalpha()to discriminate between words
// beginning withletters and those that don’t and
// then use an iforswitchstatement to further iden - tify those
// passing the isalpha()test that begin with vowels.
// A sample run mightlook like this:

#include<iostream>
#include<string>
#include<cstring>
#include<cctype>

enum CHARCTER_TYPE { VOWEL, CONSONANT, OTHER };

int identify(std::string str);

int main(void)
{
	std::string input;
	int vowels = 0, consonants = 0, other = 0;

	std::cout << "Enter words (q to quit):\n";
	while (std::cin >> input && input != "q")
	{
		switch (identify(input))
		{
		case VOWEL:
			vowels++;
			break;
		case CONSONANT:
			consonants++;
			break;
		case OTHER:
			other++;
			break;
		}
	}

	std::cout << vowels << " words beginning with vowels\n"
		<< consonants << " words beginning with consonants\n"
		<< other << " others\n";

	return 0;
}

int identify(std::string str)
{
	char first_character = (std::isalpha(str[0])
		? std::tolower(str[0])
		: str[0]);

	if (std::strchr("aeiou", first_character))
		return VOWEL;
	else if (std::isalpha(first_character))
		return CONSONANT;
	else
		return OTHER;
}
