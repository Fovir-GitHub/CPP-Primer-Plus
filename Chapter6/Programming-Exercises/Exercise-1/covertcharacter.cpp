// Write aprogram that reads keyboard input to the @ symbol
// and that echoes the input except for digits,
// converting each uppercase character to lowercase, and vice versa.
// (Don’t forget the cctype family.)

#include<iostream>
#include<cctype>

int main(void)
{
	char input;

	while (std::cin.get(input) && input != '@')
	{
		if (std::isdigit(input))
			continue;

		if (std::isalpha(input))
		{
			if (std::isupper(input))
				std::tolower(input);
			else
				std::toupper(input);
		}

		std::cout << input;
	}
	std::cout << "\nDone\n";

	return 0;
}