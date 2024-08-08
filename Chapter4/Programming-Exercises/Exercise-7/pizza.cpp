// William Wingate runs a pizza - analysis service.
// For each pizza, he needs to recordthe following information :
// nThe name of the pizza company,
// which can consist of more than one wordnThe diameter of the pizzan
// The weight of the pizzaDevise a structure
// that can hold this information and write a program
// that uses astructure variable of that type.
// The program should ask the user to enter each of thepreceding
// items of information, and then the program should display that
// informa - tion.Use cin(or its methods) and cout.

#include<iostream>
#include<string>

struct pizza
{
	std::string name;
	double diameter;
	double weight;
};

int main(void)
{
	pizza * piz = new pizza;

	std::puts("Please enter the pizza's name:");
	std::cin >> piz->name;
	std::puts("Please enter the diameter:");
	std::cin >> piz->diameter;
	std::puts("Please enter the weight:");
	std::cin >> piz->weight;

	std::cout << "The pizza information:\n"
		<< "The name: " << piz->name << '\n'
		<< "The diameter: " << piz->diameter << '\n'
		<< "The weight: " << piz->weight << '\n';

	return 0;
}
