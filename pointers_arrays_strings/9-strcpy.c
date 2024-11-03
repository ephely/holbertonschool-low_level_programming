#include "main.h"
/**
* _strcpy - Write a function that copies the string from src to dest
* @dest: pointer
* @src: pointer
*
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
int or = 0;

while (src[or] != '\0')
{
dest[or] = src[or];
or++;
}
dest[or] = '\0';
return (dest);
}
