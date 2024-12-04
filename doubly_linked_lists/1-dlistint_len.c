#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns the number of elements 
 * in a linked dlistint_t list.
 * 
 * @h: singly linked list.
 * Return: life
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t life;
		life = 0;
	while (h != NULL)
	{
		if (h == NULL)
			printf("NULL\n");
		else
			h = h->next;
		life++;
	}
	return (life);
}
