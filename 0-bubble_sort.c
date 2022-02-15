#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: array to sort
 * @size: size of the array
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					print_array(array, size);
				}
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
