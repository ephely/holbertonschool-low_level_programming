#include "main.h"
/**
* _puts - print a string
* Write a function that prints a string, followed by a new line, to stdout
* @str: char
* Return: idk
*/

void _puts(char *str)
{
int compte = 0;

while (str[compte] != '\0')
{
_putchar(str[compte]);
compte++;
}
_putchar('\n');
}
