#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: head
 */

void free_list(list_t *head)
{
	list_t *e;

	while (head != NULL)
	{
		e = head;
		head = head->next;
		free(e->str);
		free(e);
	}
}
