#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: head
 * @index: unsigned int
 *
 * Return: NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int life = 0;
	dlistint_t *s = head;

	while (s != NULL)
	{
		if (life == index)
			return (s);
		s = s->next;
		life++;
	}

	return (NULL);
}
