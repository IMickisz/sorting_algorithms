#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 * @list: the list to sort
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *left, *right;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	tmp = (*list)->next;
	while (tmp != NULL)
	{
		left = tmp->prev;
		right = tmp->next;
		while (left && tmp->n < left->n)
		{
			if (left->prev != NULL)
				left->prev->next = tmp;
			left->next = tmp->next;
			tmp->next = left;
			tmp->prev = left->prev;
			left->prev = tmp;
			if (right != NULL)
				right->prev = left;
			right = left;
			left = tmp->prev;
			if (left == NULL)
			{
				*list = tmp;
				tmp = tmp->next;
				print_list(*list);
				break;
			}
			print_list(*list);
		}
		if (left != NULL)
			tmp = right;
	}
}
