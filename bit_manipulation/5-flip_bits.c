#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 *
 * @n: unsigned long int
 * @m: unsigned long int
 *
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k = 0, count = 0;

	k = n ^ m;
	while (k)
	{
		if (k & 1)
			count++;

		k >>= 1;
	}

	return (count);
}
