#include "main.h"
/**
* swap_int - swap 2 int
* Write a function that swaps the values of two integers.
* @a: 1st int
* @b: 2nd int
*/

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}

