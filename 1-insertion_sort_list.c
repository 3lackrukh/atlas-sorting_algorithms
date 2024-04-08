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
	listint_t *temp = *list;
	int s = 0;

	if (*list == NULL || (*list)->next == NULL)
		return:
	
	while (temp != NULL)
	{
		if (temp->n < temp->next-n)
			temp = temp->next;
		else
		{
			s = temp->n;
			temp->n = temp->next->n;
			temp->next->n = s
			temp = temp->next;
			print_list(*list);
		}
		


