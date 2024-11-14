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

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
;

gr = malloc(sizeof(str));

if (gr == NULL)
return (NULL);

for (l = 0; l < i; l++)
gr[l] = str[i];
gr[l] = '\0';

return (gr);
}
