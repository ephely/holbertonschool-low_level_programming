#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_dnodeint - adds a new node at
 * the beginning of a dlistint_t list.
 *
 * @head: head
 * @n: int.
 * Return: s
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *s;

	s = malloc(sizeof(dlistint_t));
	if (s == NULL)
	return (NULL);

	s->n = n;
	s->prev = NULL;
	s->next = *head;

	if (*head == NULL)
	{

		s->prev = NULL;
		*head = s;
	}
	else
	{

	s->next = *head;
	*head = s;
	}

	return (s);
}
