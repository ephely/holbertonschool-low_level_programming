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
void *chk;

chk = malloc(b);

if (chk == NULL)
{
exit(98);
}

return (chk);
}
