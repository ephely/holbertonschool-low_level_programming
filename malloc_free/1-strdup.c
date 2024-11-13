#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer
*
* @str: char
*
* Return: gr
*/

char *_strdup(char *str)
{
int i;
int l;
char *gr;

gr = malloc(sizeof(str));

i = 0;
l = 0;
while (str[i] != '\0')
{
l++;
i++;
}

if (gr == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
{
gr[i] = str[i];
i++;
}

return (gr);
}
