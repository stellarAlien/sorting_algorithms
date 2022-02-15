#include"sort.h"
/**
 *swap - permutes two values of array in positions i & j
 * @arr: array to operate on
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
/**
 * partition - sets the left side of the array according to pivot
 * @arr: array to parition
 * @low: lower bound
 * @high: higher bound
 * @size: size of array
 * Return: index of first elemnt of unsorted array
 */
int partition(int arr[], int low, int high, size_t size)
{
	int j;
	int pivot = arr[high];
	int i;

	i = (low - 1);
	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(arr, i, j);
		}
	}
	(void)size;
	swap(arr, i + 1, high);
	print_array(arr, size);
	return (i + 1);
}
/**
 *quickSort - sortds array with recursive quicksort
 *@arr: array to sort
 *@low: lower bound
 *@high: higher bound
 *@size: size of arr
 */
void quickSort(int arr[], int low, int high, size_t size)
{
	int pi;
	(void)size;
	if (low < high)
	{
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

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quickSort(array, 0, size - 1, size);
}


