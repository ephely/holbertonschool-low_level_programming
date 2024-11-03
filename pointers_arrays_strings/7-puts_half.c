#include "main.h"
/**
* puts_half - prints the half of a string
* Write a function that prints half of a string, followed by a new line.
*
*
* @str: Pointer
*/

void puts_half(char *str)
{
int rr;
int hh;

rr = 0;
while (str[rr] != '\0')
rr++;

hh = rr / 2;

if (rr % 2 == 1)
hh++;

while (hh < rr)
{
_putchar(str[hh]);
hh++;
}
_putchar('\n');
}

