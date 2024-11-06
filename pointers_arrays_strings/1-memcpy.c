#include "main.h"

/**
* _memcpy - fills memory with a constant byte
* @dest: char
* @src: char
* @n: uns int
*
* Return: s
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
