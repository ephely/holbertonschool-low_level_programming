#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* sum_them_all - sum of all its parameters
*
* @n: int
*
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_list list;

va_start(list, n);
for (i = 0, sum = 0; i < n; i++)
sum += va_arg(list, int);

va_end(list);
return (sum);
}
