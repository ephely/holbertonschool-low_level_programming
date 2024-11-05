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
int cap = 1;
char separators[] = " \t\n,;.!?\"(){}";

while (str[i] != '\0')
{
if (cap && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] = str[i] - ('a' - 'A');
}
if (strchr(separators, str[i]))
{
cap = 1;
}
else
{
cap = 0;
}
i++;
}
return (str);
}
