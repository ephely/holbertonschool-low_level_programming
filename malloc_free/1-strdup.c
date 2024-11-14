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

for (l = 0; str[l] != '\0'; l++);

gr = malloc(sizeof(char) * (l + 1));

if (gr == NULL)
return (NULL);

for (i = 0; i < l; i++)
{
gr[i] = str[i];
}
gr[l] = '\0';
return (gr);
}





