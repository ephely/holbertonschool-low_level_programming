#include "main.h"
/**
* print_alphabet_x10 - print the alphabet 10 time
*
*/

void print_alphabet_x10(void)
{

char grr;
char gang;

for (gang = 0; gang <= 9; gang++)
{
for (grr = 'a'; grr <= 'z'; grr++)
{
_putchar(grr);
}
_putchar('\n');
}
}

