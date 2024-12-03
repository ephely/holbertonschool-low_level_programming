#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list.
 * @head: head
 * @str: string.
 * Return: head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *s;
	size_t schar;

	s = malloc(sizeof(list_t));
	if (s == NULL)
		return (NULL);

	s->str = strdup(str);

	for (schar = 0; str[schar]; schar++)
		;

	s->len = schar;
	s->next = *head;
	*head = s;

	return (*head);
}
