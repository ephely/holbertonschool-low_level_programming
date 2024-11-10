#include "main.h"

/**
* extension - extension of the  function
*
* @i: int
* @g: int
*
* Return: the return
*/

int extension(int i, int g)
{
if (i * i == g)
return (i);
if (i * i > g)
return (-1);
return (extension(i + 1, g));
}

/**
* _sqrt_recursion - return the natural square root of a number n
*
* @n: int
*
* Return: the return
*/

int _sqrt_recursion(int n)
{
return (extension(1, n));
}
