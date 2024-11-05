#include <string.h>
#include "main.h"
/**
* *cap_string - capitalizes all words
*
* @str: char
*
* Return: str.
*/

char *cap_string(char *str)
{
int i = 0;
int j;
int cap = 1;
char sep[] = " \t\n,;.!?\"(){}";

while (str[i] != '\0')
{
if (cap && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] = str[i] - ('a' - 'A');
}
cap = 0;
for (j = 0; sep[j] != '\0'; j++)
{
if (str[i] == sep[j])
{
cap = 1;
break;
}
}
i++;
}
return (str);
}
