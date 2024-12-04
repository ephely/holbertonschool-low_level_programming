#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *e;

	while (head != NULL)
	{
		e = head;
		head = head->next;
		free(e);
	}
}
