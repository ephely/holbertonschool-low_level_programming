#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 *
 * @n: unsigned int
 * @index: unsigned int
 *
 * Return: the return
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}