#include "main.h"
/**
* print_rev - print a string backward
* Write a function that prints a string, in reverse, followed by a new line.
* @s: char
* Return: idk
*/

void print_rev(char *s)
{
int compte = 0;

while (s[compte] != '\0')
{
compte++;
}
for (compte -= 1; compte >= 0; compte--)
{
_putchar(s[compte]);
}
_putchar('\n');
}
