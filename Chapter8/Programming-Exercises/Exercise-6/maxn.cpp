// Write:  template function maxn 0 that takes as sits arguments an array of items.of
// type and an integer  representing t the number of elements in the array and that
// returns the largest item in the array.Test it in ? program that uses the function tem -
// plate with an  array of six. int value and an  array of four double values.The  pro -
// gram  should also include : specialization that takes an array of  pointers - to - char  as
// an argument and the number of fpointers as  second argument and that returns the
// address s of the l longest  string.I  multiple strings are tied for having  the longest
// length, the function should return the address s of the i first one tied for longest.Test
// the  specialization with an  array of five s string pointers.

#include<iostream>
#include<algorithm>
#include<cstring>

template <class T>
T maxn(T arr[], int element_number);

template <>
char * maxn<char *>(char * arr[],
	int element_number);

int main(void)
{
	int first_array[6] = { 123,456,48,6455,231,98956 };
	double second_array[4] = { 13.654,123.5468,121.6897,889.263 };
	const char * third_array[5] =
	{
		"This is the first test.",
		"This is another test.",
		"The third string.",
		"test",
		"The final string of test"
	};

	std::cout << maxn(first_array, 6) << '\n'
		<< maxn(second_array, 4) << '\n'
		<< maxn(third_array, 5) << '\n';

	return 0;

}

template<class T>
T maxn(T arr[], int element_number)
{
	T max_value = arr[0];
	for (int i = 1; i < element_number; i++)
		max_value = std::max(arr[i], max_value);

	return max_value;
}

template<>
char * maxn(char * arr[], int element_number)
{
	int max_length = std::strlen(arr[0]);
	int max_length_position = 0;

	for (int i = 1; i < element_number; i++)
		if (std::strlen(arr[i]) > max_length)
		{
			max_length_position = i;
			max_length = std::strlen(arr[i]);
		}

	return arr[max_length_position];
}
