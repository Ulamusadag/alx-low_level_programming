#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: headof the node
 * @index: the indext we looking at
 * Return: the node or Null
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}
