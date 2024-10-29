#include "main.h"
/**
* print_diagonal - print diagonal for pleasure
*
* 
*
* @n: int of number of lines
*/
void print_diagonal(int n)
{
int faignon;
int html;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (faignon = 0; faignon < n; faignon++)
{
for (html = 0; html < faignon; html++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}
