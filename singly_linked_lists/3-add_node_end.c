#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - function that adds a
 * new node at the end of a list_t list
 * @head: head
 * @str: string.
 * Return: head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *s;
	list_t *temp = *head;

	s = malloc(sizeof(list_t));
	if (s == NULL)
		return (NULL);

	s->str = strdup(str);

	s->next = NULL;

	if (*head == NULL)
	{
		*head = s;
	}


	else
	{

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = s;
	}
	return (*head);
}
