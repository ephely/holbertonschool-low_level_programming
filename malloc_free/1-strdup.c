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
int size = 0;
char *gr;
char *ptr;

if (str == NULL)
return (NULL);

ptr = str;
while (*ptr++)
size++;

gr = malloc(size + 1);
if (gr == NULL)
return (NULL);

ptr = gr;
while (*str)
*ptr++ = *str++;

*ptr = 0;
return (gr);
}
