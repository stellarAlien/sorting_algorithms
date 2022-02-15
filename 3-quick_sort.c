#include"sort.h"
/**
 * permut - permutes two values of array in positions i & j
 * @array: array to operate on
 *@i: index of first element
 *@j: index of other element
 */
void swap(int arr[], int i, int j)
{
	int x;
	x = arr[i];
	arr[i] = arr[j];
	arr[j] = x;


}

int partition(int arr[], int low, int high, size_t size)
{
	int j;
	int pivot = arr[high];
	int i = (low - 1);
		 
	for(j = low; j <= high- 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(arr,i,j);
		}
	}	
	(void)size;
	print_array(arr, size);
	swap(arr, i + 1, high);
	return (i + 1);
}
/**
 *quickSort - sortds array with recursive quicksort
 *@low: lower bound
 *@high: higher bound
 */
void quickSort(int arr[], int low, int high,size_t size)
{
	(void)size;
	if (low < high)
	{
	int pi; 
		
	pi = partition(arr, low, high, size);
					 
	quickSort(arr, low, pi - 1, size);
	quickSort(arr, pi + 1, high, size);
	}
	}
/**
 *quick_sort - sorts array with quick sort method(my fav)
 *@array: array to sort
 *@size: size of array
 */

void quick_sort(int *array,size_t size)
{
	if(size < 2)
		return;
	quickSort(array, 0, size - 1, size);
}


