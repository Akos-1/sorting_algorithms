#include "sort.h"
/**
 * swap_nodes - two nodes in a doubly linked list are swapped
 * @list: the head of the list's pointer
 * @node1: First node to be swapped
 * @node2: Second node to be swapped
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1 == node2)
		return;

	if (node1->prev)
		node1->prev->next = node2;
	else
		*list = node2;

	if (node2->next)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->prev = node1->prev;
	node2->next = node1;

	if (node1->next)
		node1->next->prev = node1;

	node1->prev = node2;
}

/**
 * insertion_sort_list - a doubly linked list of integers
 * is sorted by insertion method
 * @list: the head of a doubly-linked list of integers' pointer.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *y, *current, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (current = (*list)->next; current != NULL; current = temp)
	{
		temp = current->next;
		y = current->prev;

		while (y != NULL && current->n < y->n)
		{
			swap_nodes(list, y, current);
			print_list(*list);
			y = current->prev;
		}
	}
}
