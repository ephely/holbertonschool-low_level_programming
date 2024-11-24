#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_char - print character
* @arg: value
*/

void print_char(va_list arg)
{
printf("%c", va_arg(arg, int));
}

/**
* print_int - print integer
* @arg: value
*/

void print_int(va_list arg)
{
printf("%d", va_arg(arg, int));
}

/**
* print_float - prints float
* @arg: value
*/

void print_float(va_list arg)
{
printf("%f", va_arg(arg, double));
}

/**
* print_string - prints a string
* @arg: value
*/

void print_string(va_list arg)
{
char *str = va_arg(arg, char *);

if (str == NULL)
str = "(nil)";
printf("%s", str);
}

/**
* print_all - prints anything
* @format: char
*/
void print_all(const char * const format, ...)
{
va_list arg;
unsigned int i = 0;
unsigned int j;
char *sep = "";

void (*print_funcs[])(va_list) = {print_char, print_int,
print_float, print_string};
char format_specifiers[] = {'c', 'i', 'f', 's'};

va_start(arg, format);

while (format && format[i])
{
j = 0;
while (j < sizeof(format_specifiers) / sizeof(format_specifiers[0]))
{
if (format[i] == format_specifiers[j])
{
printf("%s", sep);
print_funcs[j](arg);
sep = ", ";
break;
}
j++;
}
i++;
}

printf("\n");
va_end(arg);
}
