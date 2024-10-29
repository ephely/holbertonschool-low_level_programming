#include "main.h"
/**
* print_square - print squares w/ #
* Write a function that prints a square, followed by a new line.
*
*
*/

void print_square(int size)
{
int gang;
int gucci;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (gang = 0; gang < size; gang++)
{
for (gucci = 0; gucci < size; gucci++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
