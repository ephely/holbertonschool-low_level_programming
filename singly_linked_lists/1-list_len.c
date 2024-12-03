#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: life
 */

size_t list_len(const list_t *h)
{
	size_t life;
		life = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("NULL\n");
		else
            h = h->next;
		life++;
	}
	return (life);
}
