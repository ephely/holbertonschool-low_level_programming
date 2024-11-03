#include "main.h"
/**
* puts2 - prints every other character of a string
* Write a function that prints every other character of a string,
* starting with the first character, followed by a new line.
*
* @s: Pointer
*/

void puts2(char *s)
{
int rr;

for (rr = 0; s[rr] != '\0'; rr++)
{
if (rr % 2 == 0)
{
_putchar(s[rr]);
}
}
_putchar('\n');
}
