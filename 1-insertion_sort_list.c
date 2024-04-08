#include "sort.h"

/**
 * insertion_sort_list- sorts a linked list in ascending order,
 * prints the list at each swap.
 *
 * @list: pointer to the vector of listed elements.
 *
 * Return: nothing.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;
	int s = 0;

	if (*list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current != NULL)
	{
		temp = current;
		
		while (temp != *list && temp->prev->n > temp->n)
		{
			s = temp->n;
			temp->n = temp->prev->n;
			temp->prev->n = s;
			temp = temp->prev;
			print_list(*list);
		}
		current = current->next;
	}
}
