#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: the head of the list
 * Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}
	while (tmp != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = *head;
	}
}
