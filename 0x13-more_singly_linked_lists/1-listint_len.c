#include "lists.h"

/**
 * listint_len - ghfjm
 * @h: gvhmg
 * Return: ghjg
*/

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
