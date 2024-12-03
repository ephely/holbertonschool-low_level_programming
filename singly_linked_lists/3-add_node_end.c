#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - function that adds a
 * new node at the end of a list_t list
 *
 * @head: head
 * @str: string.
 *
 * Return: head
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *s;
    list_t *last;
	char *new_str;
	unsigned int len;

	if (head == NULL || str == NULL)
		return (NULL);

	s = malloc(sizeof(list_t));
	if (s == NULL)
		return (NULL);

	 new_str = strdup(str);
	if (new_str == NULL)
	{
		free(s);
		return (NULL);
	}

	len = 0;
	while (str[len])
		len++;

	s->str = new_str;
	s->len = len;
	s->next = NULL;
	if (*head == NULL)
	{
		*head = s;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = s;
	}

	return (s);
}
