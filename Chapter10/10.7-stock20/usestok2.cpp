#include<iostream>
#include"stock20.h"

const int STKS = 4;

int main(void)
{
	Stock stocks[STKS] =
	{
		Stock("NanoSmart", 12, 20.0),
		Stock("Boffo Objects", 200, 2.0),
		Stock("Monolithic Obelisks", 130, 3.25),
		Stock("Fleep Enterprises", 60, 6.5)
	};

	std::cout << "Stock holdings:\n";

	for (int i = 0; i < STKS; i++)
		stocks[i].show();

	const Stock * top = &stocks[0];

	for (int i = 1; i < STKS; i++)
		top = &top->topval(stocks[i]);

	std::cout << "\nMost valuable holding:\n";
	top->show();

	return 0;
}