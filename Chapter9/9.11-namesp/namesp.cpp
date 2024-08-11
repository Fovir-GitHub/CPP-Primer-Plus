#include<iostream>
#include"namesp.h"

namespace pers
{
	using std::cout;
	using std::cin;

	void getPerson(Person & rp)
	{
		cout << "Enter first name: ";
		cin >> rp.fname;
		cout << "Enter last name: ";
		cin >> rp.lname;

		return;
	}

	void showPerson(const Person & rp)
	{
		cout << rp.lname << ", " << rp.fname;
		return;
	}
}

namespace debts
{
	void getDebt(Debt & rd)
	{
		getPerson(rd.name);
		std::cout << "Enter debt: ";
		std::cin >> rd.amount;

		return;
	}

	void showDebt(const Debt & rd)
	{
		showPerson(rd.name);
		std::cout << ": $" << rd.amount << std::endl;

		return;
	}

	double sumDebts(const Debt ar[], int n)
	{
		double total = (double) 0;
		for (int i = 0; i < n; i++)
			total += ar[i].amount;

		return total;
	}
}