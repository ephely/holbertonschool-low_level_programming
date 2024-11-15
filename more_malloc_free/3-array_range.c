#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
*
* @min: int
* @max: int
*
* Return: ran
*/

int *array_range(int min, int max)
{
unsigned int mm;
unsigned int i;
int *ran;

if (min > max)
return (NULL);

mm = max - min + 1;

ran = malloc(sizeof(int) * mm);

if (ran == NULL)
return (NULL);

for (i = 0; i < mm; i++)
{
ran[i] = min + i;
}

return (ran);
}
