#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: array to sort
 * @size: size of the array
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, minus;

	if (size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			minus = i;
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[minus])
					minus = j;
			}
			if (array[i] != array[minus])
			{
				swap(&array[minus], &array[i]);
				print_array(array, size);
			}
		}
	}
}

/**
 * swap - swaps the value of a and b
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
