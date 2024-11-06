#include "main.h"
#include <stdio.h>

/**
* _memcpy - fills memory with a constant byte
* @dest: char
* @src: char
* @n: uns int
*
* Return: s
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return s;
}
s++;
}
if (c == '\0')
{
return s;
}
return NULL;
}
