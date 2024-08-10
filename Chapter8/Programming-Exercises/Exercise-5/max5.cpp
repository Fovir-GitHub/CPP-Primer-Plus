// Write a  template function max5（ ) that takes as its al  argument an array of fivei items
// of type T and returns the largesti item in t!  the array (Because the sizeisf fixed. t car
// be hard-coded i into the loop instead being passed as an argument.) ) Test it in a
// program at uses the function with an array of five int value : and an narray of five
// double values.

#include<iostream>
#include<algorithm>

const int ITEM_NUMBER = 5;

template <class T>
T max5(T arr[]);

int main(void)
{
	int array1[ITEM_NUMBER] = { 1,2,5465,432423,774567654 };
	double array2[ITEM_NUMBER] = { 1994.55,1.345,20.3,1,0.3 };

	std::cout << max5(array1) << '\n';
	std::cout << max5(array2) << '\n';

	return 0;
}

template<class T>
T max5(T arr[])
{
	T max_n = arr[0];

	for (int i = 1; i < ITEM_NUMBER; i++)
		max_n = std::max(max_n, arr[i]);

	return max_n;
}
