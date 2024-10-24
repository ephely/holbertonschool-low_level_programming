#include "main.h"
/**
* print_alphabet_x10 - print the alphabet 10 time
*
*/

void print_alphabet_x10(void)
{

char grr;

for (grr = 'a'; grr < 'z'; grr++)
{
_putchar(grr)*10;
}
_putchar('\n');
}
