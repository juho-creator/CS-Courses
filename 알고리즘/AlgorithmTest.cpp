#include <iostream>
#include "mergesort.h"


int main()
{
	const int length = 8;

	int a[length] = { 27, 10, 12, 20, 25, 13, 15 ,22 };
	merge_sort(a, length);

	for (int i = 0; i < length; i++)
	{
		std::cout << a[i] << " ";
	}
}
