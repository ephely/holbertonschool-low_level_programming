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

gl = malloc(sizeof(*s1 + *s2));

if (gl == NULL)
{
return (NULL);
}

i = 0;
while (s1[i] != '\0')
{
gl[k] = s1[i];
i++;
k++;
}

j = 0;
while (s2[j] != '\0')
{
gl[k] = s2[j];
j++;
k++;
}

return (gl);
free(gl);
}
