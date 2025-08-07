#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *                       order using the Insertion sort algorithm
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		temp = current;
		current = current->next;

		while (temp->prev != NULL && temp->prev->n > temp->n)
		{
			/* Swap temp with its previous node */
			if (temp->next != NULL)
				temp->next->prev = temp->prev;

			temp->prev->next = temp->next;

			if (temp->prev->prev != NULL)
				temp->prev->prev->next = temp;
			else
				*list = temp;

			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;

			print_list(*list);
		}
	}
}
