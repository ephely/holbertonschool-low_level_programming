#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index
 * index of a dlistint_t linked list.
 *
 * @head: head
 * @index: unsigned int
 *
 * Return: 1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *s = *head;
	unsigned int i = 0;

	if (s == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = s->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(s);
		return (1);
	}
	while (s != NULL && i < index)
	{
		s = s->next;
		i++;
	}

	if (s == NULL)
	{
		return (-1);
	}

	if (s->prev != NULL)
	{
		s->prev->next = s->next;
	}

	if (s->next != NULL)
	{
		s->next->prev = s->prev;
	}
	free(s);
	return (1);
}
