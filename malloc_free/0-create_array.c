#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars
*
* @size: unsigned int
* @c: char
*
* Return: Always 0.
*/

char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i = 0;

ar = malloc(size * sizeof(c));

while (i < size)
{
if (ar == NULL)
{
return (NULL);
}
ar[i] = c;
i++;
}
return (ar);
}
