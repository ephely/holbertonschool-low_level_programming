#include "main.h"
/**
* jack_bauer - write minutes
* Write a function that prints every minute of the day of Jack Bauer
*
* Return: time
*/
void jack_bauer(void)
{
int h, min
for (h = 0; h < 24; h++)
{
for (min = 0; min < 60; min++)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar('\n');
}
}
}
