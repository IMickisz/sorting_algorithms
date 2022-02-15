#include "sort.h"

/**
 * shell_sort - function that sorts an array of integers
 * in ascending order using the Shell sort algorithm, using
 * the Knuth sequence
 * @array: array to sort
 * @size: size of the array
 * Return: Nothing
 */

void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, j;
	int value;

	if (size >= 2)
	{
		while (gap < size / 3)
			gap = gap * 3 + 1;

		while (gap >= 1)
		{
			for (i = gap; i < size; i++)
			{
				value = array[i];
				j = i;
				while (j >= gap && array[j - gap] > value)
				{
					array[j] = array[j - gap];
					j -= gap;
				}
				array[j] = value;
			}
			gap = (gap - 1) / 3;
			print_array(array, size);
		}
	}
}
