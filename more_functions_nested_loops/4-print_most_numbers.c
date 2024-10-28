#include "main.h"
/**
* print_most_numbers - print the most numbers
*
*/

void print_most_numbers(void)
{

char faignon;

for (faignon = '0'; faignon <= '9'; faignon++)
{
if (faignon != '2' && faignon != '4')
{
_putchar(faignon);
}
}
_putchar('\n');
}
