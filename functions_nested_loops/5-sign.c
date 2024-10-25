#include "main.h"
/**
* print_sign - print sins
* Description: Write a function that check lowercase and uppercase characters
* @c: The character to check
* Return: 1 if the character is lowercase or uppercase, 0 otherwise.
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

