#include<iostream>
#include"mylist.h"

void showItem(Item & num);

int main(void)
{
	MyList list;

	std::cout << list.IsEmpty() << '\n';
	for (int i = 0; i < 10; i++)
		list.AddItem(i);

	std::cout << list.IsEmpty() << '\n';
	list.visit(showItem);

	return 0;
}

void showItem(Item & num)
{
	std::cout << num << ' ';
	return;
}
