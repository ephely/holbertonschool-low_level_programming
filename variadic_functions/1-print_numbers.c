#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - prints numbers
*
* @separator: char
* @n: int
*
* Return: list
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *sep;
va_list list;

if (separator == NULL || *separator == 0)
sep = "";

else
sep = (char *) separator;
va_start(list, n);

if (n > 0)
printf("%d", va_arg(list, int));
for (i = 1; i < n; i++)
printf("%s%d", sep, va_arg(list, int));
printf("\n");
va_end(list);
}

