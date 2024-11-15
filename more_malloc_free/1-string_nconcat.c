#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
*
* @s1: char
* @s2: char
* @n: int
*
* Return: nco
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *nco;
unsigned int i;
unsigned int j;
unsigned int k;
unsigned int l;

if (s1 == NULL || s2 == NULL)
{
return ("");
}

while (s1[k])
{
k++;
}
while (s2[l])
{
l++;
}

if (n >= l)
n = l;

nco = malloc(sizeof(char) * (k + n + 1));

if (nco == NULL)
return (NULL);

for (i = 0; i < k; i++)
nco[i] = s1[i];
for (j = 0; j < n; j++, i++)
nco[i] = s2[j];
nco[i] = '\0';

return (nco);
}
