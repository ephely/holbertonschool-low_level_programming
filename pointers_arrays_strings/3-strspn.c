#include "main.h"
#include <stdio.h>

/**
* _strspn - gets the length of a prefix substring
* @s: char
* @accept: char
*
* Return: s
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int j;
int k;

for (i = 0; s[i] != '\0'; i++)
{
k = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
k = 1;
break;
}
}
if (!k)
break;
}
return (i);
}
