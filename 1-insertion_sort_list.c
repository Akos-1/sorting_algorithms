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
	listint_t *current, *insertion_point;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		insertion_point = current->prev;

		while (insertion_point != NULL && insertion_point->n > current->n)
		{
			if (insertion_point->prev != NULL)
				insertion_point->prev->next = current;
			else
				*list = current;
			if (current->next != NULL)
				current->next->prev = insertion_point;

			insertion_point->next = current->next;
			current->prev = insertion_point->prev;
			current->next = insertion_point;
			insertion_point->prev = current;
			insertion_point = current->prev;
		}
		current = current->next;
	}
}
