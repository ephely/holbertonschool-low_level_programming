#include "main.h"
/**
* print_sign - print sign
* Description: Write a function that print the sign
* @n: The character to check
* Return: 1 if the number is above 0, 0 if it's 0, -1 otherwise.
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}

