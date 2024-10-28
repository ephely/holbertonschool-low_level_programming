#include "main.h"
/**
* more_numbers - print the most numbers
*
*/

void more_numbers(void)
{

int gang;
int faignon;

for (gang = '0'; gang <= '9'; gang++)
{
for (faignon = 0; faignon <= 14; faignon++)
{
if (faignon >= 10)
{
_putchar((faignon / 10) + 0);
}
_putchar((faignon % 10) + 0);
}
_putchar('\n');
}
}
