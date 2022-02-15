#include "sort.h"

/**
 * quick_sort - Function that sorts an array of integers in ascending
 * order unsign the Quick sort algorithm.
 * @array: The array to sort
 * @size: The size of the array
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	int low, high;

	if (size < 2)
		return;
	low = 0;
	high = size - 1;
	quick_sort_array(array, low, high, size);
}

/**
 * partition - split the array into little unsorted parts
 * @array: array to sort
 * @low: first element of the array
 * @high: last element of the array
 * @size: size of the array
 * Return: Nothing
 */

int partition(int array[], int low, int high, size_t size)
{
	int pivot = array[high];
	int i = (low - 1), j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			if (i != j)
				print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	if ((i + 1) != high)
		print_array(array, size);
	return (i + 1);
}

/**
 * quick_sort_array - Function that sorts the array.
 * @array: The array to sort
 * @low: The first element of the array
 * @high: The last element of the array.
 * @size: The size of the array
 * Return: Nothing
 */

void quick_sort_array(int array[], int low, int high, size_t size)
{
	int result;

	if (low < high)
	{
		result = partition(array, low, high, size);
		quick_sort_array(array, low, result - 1, size);
		quick_sort_array(array, result + 1, high, size);
	}
}

/**
 * swap - Swaps the value of a and b
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 * Return: Nothing
 */

void swap(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
