#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
*
* @s1: char
* @s2: char
*
* Return: gl
*/

char *str_concat(char *s1, char *s2)
{
int i;
int j;
int k;
char *gl;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] || s2[i]; i++)
k++;

gl = malloc(sizeof(char) * k);

if (gl == NULL)
return (NULL);

for (i = 0; s1[i]; i++)
gl[j++] = s1[i];

for (i = 0; s2[i]; i++)
gl[j++] = s2[i];

return (gl);
}
