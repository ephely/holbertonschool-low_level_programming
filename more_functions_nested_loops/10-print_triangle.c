#include "main.h"

/**
* print_triangle - Prints triangle
* @size: size of triangle
*
*
*/
void print_triangle(int size)
{
int tic, tac, boom;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (tic = 0; tic < size; tic++)
{
for (tac = size - tic; tac > 1; tac--)
{
_putchar(32);
}

for (boom = 0; boom <= tic; boom++)
{
_putchar(35);
}

_putchar('\n');
}
}
}
