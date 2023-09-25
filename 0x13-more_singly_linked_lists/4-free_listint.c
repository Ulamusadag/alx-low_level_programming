#include "lists.h"

/**
 * free_listint - ghfvg
 * @head: gvgjj
 * Return: gkg
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
