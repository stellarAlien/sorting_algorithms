#include "sort.h"
/**
 *quick
 *
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min, aux;

	if(size <= 1)
		return;
	for(i = 0; i < size - 1; i++)
	{
		min = i;
		for(j = i + 1; j < size; j++)
		{
			if(array[min] > array[j])
				min = j;
		}
		if(min != i)
		{
			aux = array[i];
			array[i] = array[min];
			array[min] = aux;
		}
		print_array(array, size);
	}
}
