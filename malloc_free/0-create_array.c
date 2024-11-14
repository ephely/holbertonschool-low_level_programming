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
unsigned int i;

if (size == 0)
return (NULL);


ar = malloc(size * sizeof(*ar));

if (ar == NULL)
return (NULL);

for (i = 0; i < size; i++)
ar[i] = c;

return (ar);
}
