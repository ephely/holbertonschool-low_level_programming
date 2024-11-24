#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_strings - function that prints strings
*
* @n: int
* @separator: char
*
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list elm;
unsigned int i;
char *str;

va_start(elm, n);

for (i = 0; i < n; i++)
{
str = va_arg(elm, char*);

if (str == NULL)
printf("(nil)");

else
printf("%s", str);

if (i < n - 1 && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(elm);
}
