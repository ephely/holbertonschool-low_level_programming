#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - returns the sum of all the data
 * (n) of a dlistint_t linked list.
 *
 * @head: head
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *s = head;
	int sum = 0;

	if (head == NULL)
	
		while (head->prev != NULL)
			head = head->prev;

	while (s != NULL)
	{
		sum += s->n;
		s = s->next;
	}
    
	return (sum);
}
