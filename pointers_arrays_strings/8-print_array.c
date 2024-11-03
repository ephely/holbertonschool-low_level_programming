#include "main.h"
#include <stdio.h>

/**
* print_array - prints numbers of an array of integers
* Write a function that prints n elements of an array of integers, followed by a new line.
* @a: This is the input array
* @n: This is the lenght of the array
* @rr: count
*
*/

void print_array(int *a, int n)
{
int rr;

for (rr = 0; rr < n; rr++)
{
printf("%d", a[rr]);
if (rr != (n - 1))
{
printf(", ");
}
}
putchar('\n');
}
