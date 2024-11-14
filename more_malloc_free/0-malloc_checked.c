#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
*
* @b: int
*
* Return: chk
*/

void *malloc_checked(unsigned int b)
{
int *chk;

chk = malloc(sizeof(b));

if (chk == NULL)
{
return (NULL);
}

return (chk);
}
