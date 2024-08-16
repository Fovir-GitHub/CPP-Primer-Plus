#include "plorg.h"
#include<iostream>


Plorg::Plorg()
{
	name = "name";
	contentment_index = 50;
}

Plorg::Plorg(std::string new_name, int ci)
{
	name = new_name;
	contentment_index = ci;
}

Plorg::~Plorg()
{
}

void Plorg::set_ci(int ci)
{
	contentment_index = ci;
	return;
}

void Plorg::show()
{
	std::cout << "Name: " << name << " CI: "
		<< contentment_index << '\n';

	return;
}

