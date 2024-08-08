// Write a program that uses an array of charand a loop
// to read one word at a timeuntil the word doneis entered.
// The program should then report the number of
// words entered(not counting done).

#include<iostream>
#include<cstring>

int main(void)
{
	const int WORD_SIZE = 40;

	char word[WORD_SIZE];
	int word_counter = 0;
	while (std::cin >> word
		&& std::strcmp(word, "done") != 0)
		word_counter++;

	std::cout << "You entered a total of " << word_counter
		<< " words.\n";

	return 0;
}