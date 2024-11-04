#include "main.h"

/**
* _strcat - Write a function that concatenates two strings.
*
* @dest: This is the output dest
* @src: This is the input source
* Return: Return dest
*/

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;


while (dest[i] != '\0')
{
i++;
}

while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';

return (dest);
}
