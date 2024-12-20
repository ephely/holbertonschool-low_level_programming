#include "main.h"
#include <stdlib.h>

/**
* *_calloc - allocates memory for an array, using malloc
*
* @nmemb: int
* @size: int
*
* Return: cal
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *cal;
unsigned int i;
unsigned int ns;

ns = nmemb * size;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

cal = malloc(ns);

if (cal == NULL)
{
return (NULL);
}

for (i = 0; i < ns; i++)
{
cal[i] = 0;
}

return ((void *)cal);
}

