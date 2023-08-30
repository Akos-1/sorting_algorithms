#include "sort.h"
/**
 * insertion_sort_list - a doubly linked list of integers is sorted
 * by insertion method
 * @list: the head of a doubly-linked list of integers' pointer.
 *
 * Description: the list is printed after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *insertion_point, *tmp_prev;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		insertion_point = current->prev;

		while (insertion_point != NULL && insertion_point->n > current->n)
		{
			tmp_prev = insertion_point->prev;
			insertion_point->prev = current;
			current->next = insertion_point;
			current->prev = tmp_prev;

			if (tmp_prev != NULL)
				tmp_prev->next = current;
			else
				*list = current;

			insertion_point->next = current->next;
			if (current->next != NULL)
				current->next->prev = insertion_point;

			insertion_point = tmp_prev;
		}

		current = current->next;
	}
}
