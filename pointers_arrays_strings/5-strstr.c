#include "main.h"
#include <stdio.h>

/**
* _strstr - locates a substring
*
* @haystack: cahr
* @needle: char
*
* Return: haystack or NULL
*/

char *_strstr(char *haystack, char *needle)
{
if (needle[0] == '\0')
{
return (haystack);
}
for (; *haystack != '\0'; haystack++)
{
char *h = haystack;
char *n = needle;
while (*h == *n && *n != '\0')
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
}
return (NULL);
}
