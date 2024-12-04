#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: doubly linked list.
 * Return: life
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t life;
		life = 0;
	while (h != NULL)
	{
		if (h == NULL)
			printf("%s\n", ("NULL"));
		else
			printf("%d\n", h->n);
		h = h->next;
		life++;
	}
	return (life);
}
