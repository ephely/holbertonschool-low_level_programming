#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 *
 * @h: head
 * @idx: unsigned int
 * @n: int
 *
 * Return: s
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	while (temp && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}

	if (!temp)
	{
		free(new);
		return (NULL);
	}

	if (!temp->next)
		return (add_dnodeint_end(h, n));

	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
