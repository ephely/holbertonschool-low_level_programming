#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list.
 *
 * @head: head
 * @n: int.
 * Return: s
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *s, *temp;

	s = malloc(sizeof(dlistint_t));
	if (s == NULL)
	return (NULL);

	s->n = n;
	s->prev = NULL;
	s->next = NULL;

	if (*head == NULL)
	{

		s->prev = NULL;
		*head = s;
	}
	else
	{

		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = s;
		s->prev = temp;
	}

	return (s);
}
