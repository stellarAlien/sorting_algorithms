#include "sort.h"
/**
 *bubble_sort - sorts an array according to bubble sort algo
 *@arr: array to sort
 *@n: size of arrray
 */
void bubble_sort(int arr[], size_t n)
{
	int i = 0;
	int temp;
	int again = 0;
	int iter;

	iter = n - 1;

	if(n < 2 || arr == NULL)
		return;
	do {
		again = 0;
		i = 0;
		for (; i < iter; ++i)
		{
			if (arr[i + 1] < arr[i])
			{
				again = 1;
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
		--iter;
	} while (again);
}

