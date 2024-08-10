// The CandyBarstructure contains three members.
// The first member holds the brandname of a candy bar.
// The second member holds the weight(which may have a frac - tional part)
// of the candy bar, and the third member holds
// the number of calories(an integer value) in the candy bar.
// Write a program that uses a function that
// takesas arguments a reference to CandyBar, a pointer - to - char,
// a double, and an intanduses the last three values
// to set the corresponding members of the structure.
// The lastthree arguments should have default values
// of “Millennium Munch, ”2.85, and 350.
// Also the programshould use a function that takes a reference to
// a CandyBaras anargument and displays the contents of the structure.
// Use const where appropriate.

#include<iostream>
#include<string>

struct CandyBar
{
	std::string brand;
	double weight;
	int number_of_calories;
};

void ConstructCandyBar(CandyBar & cb,
	const char * brand_name = "Millennium Munch",
	const double weight = 2.85,
	const int calories = 350);

void DisplayCandyBar(const CandyBar & cb);

int main(void)
{
	CandyBar my_candy_bar;
	CandyBar my_second_candy_bar;

	ConstructCandyBar(my_candy_bar);
	ConstructCandyBar(my_second_candy_bar,
		"test brand", 100, 35);

	DisplayCandyBar(my_candy_bar);
	DisplayCandyBar(my_second_candy_bar);

	return 0;
}

void ConstructCandyBar(CandyBar & cb, const char * brand_name, const double weight, const int calories)
{
	cb.brand = brand_name;
	cb.weight = weight;
	cb.number_of_calories = calories;

	return;
}

void DisplayCandyBar(const CandyBar & cb)
{
	std::cout << "The brand: " << cb.brand << '\n'
		<< "The weight: " << cb.weight << '\n'
		<< "The number of calories: " << cb.number_of_calories
		<< '\n';
	return;
}
