#include "main.h"

/**
* extension - extension of the function
*
* @n: int
*
* @i: int
* Return: the return
*/

int extension(int n, int i)
{
if (i == n)
return (1);
if (n % i == 0 || n <= 1)
return (0);
return (extension(n, i + 1));
}

/**
* is_prime_number - returns 1 if the input integer is a prime number
*
* @n: int
*
* Return: the return
*/

int is_prime_number(int n)
{
return (extension(n, 2));
}
