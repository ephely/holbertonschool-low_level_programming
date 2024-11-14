#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
*
* @b: int
*
* Return: chk
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *cal;
unsigned int i;
unsigned int ns;

ns = nmemb * size;

cal = malloc(ns);

if (nmemb == 0 || size == 0)
{
return (NULL);
}

for (i = 0; i < ns; i++)
{
cal[i] = 0;
}

if (cal == NULL)
{
return (NULL);
}

return (cal);
}

