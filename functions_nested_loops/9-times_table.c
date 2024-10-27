#include "main.h"
/**
* times_table - Prints the 9 times table, starting with 0
* Write a function that prints the 9 times table, starting with 0
*
* Return: time
*/
void times_table(void)
{
int a, e, i, u, o;

for (a = 0; a <= 9; a++)
{
for (e = 0; e <= 9; e++)
{
i = a * e;

if (i > 9)
{
u = i % 10;
o = (i - u) / 10;

_putchar(44);
_putchar(32);
_putchar(o + '0');
_putchar(u + '0');
}
else
{
if (e != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}

_putchar(i + '0');
}
}
_putchar('\n');
}
}

