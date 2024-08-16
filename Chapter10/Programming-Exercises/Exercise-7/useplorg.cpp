#include<iostream>
#include"plorg.h"

int main(void)
{
	Plorg test;
	Plorg pg("test", 100);

	test.show();
	pg.show();
	test.set_ci(20);
	test.show();

	return 0;
}