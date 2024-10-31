#include "main.h"
/**
* _puts - print a string
* Write a function that prints a string, followed by a new line, to stdout
* @str: char
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
