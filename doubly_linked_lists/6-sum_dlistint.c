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
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
