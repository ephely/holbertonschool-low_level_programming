#include "main.h"
/**
* print_line - print lines for pleasure
*
* Write a function that draws a straight line in the terminal.
*
* @n: int of number of lines
*/
void print_line(int n)
{
int i = 0;
if (n > 0)
{
while (i != n)
{
_putchar('_');
i++;
}
}
_putchar('\n');
}




