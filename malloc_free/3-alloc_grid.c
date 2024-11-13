#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
*
* @width: int
* @height: int
*
* Return: mltp
*/

int **alloc_grid(int width, int height)
{
int i;
int j;
int **mltp;

if (width + height < 2 || width < 1 || height < 1)
return (NULL);

mltp = malloc(height * sizeof(*mltp));
if (mltp == NULL)
return (NULL);


for (i = 0; i < height; i++)
{
mltp[i] = malloc(width * sizeof(**mltp));
if (mltp[i] == NULL)
{
for (i--; i >= 0; i--)
free(mltp[i]);
free(mltp);
return (NULL);
}
for (j = 0; j < width; j++)
mltp[i][j] = 0;
}
return (mltp);
}
