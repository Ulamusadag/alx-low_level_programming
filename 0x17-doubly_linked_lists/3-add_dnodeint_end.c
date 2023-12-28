#include "lists.h"

/**
 * add_dnodeint_end - add node to the end of the list
 * @head: the head node of the list
 * @n: the new node must be added
 * Return: the addres of the new node or NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	h = *head;

	new_node->n = n;
	new_node->prev = h;
	new_node->next = NULL;

	if (h != NULL)
	{
		h->next = new_node;
	}
	return (new_node)

}
