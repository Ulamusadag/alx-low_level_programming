#include "lists.h"

/**
 * dlistint_len - function that return numbeber of elements
 * @h: head of list
 * Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;

	if (h == NULL)
	{
		return (count);
	}
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
