#include "main.h"

/**
* leet - encodes a string into 1337
*
* @t: This is the input string
*
* Return: t
*/

char *leet(char *t)
{
int index;
int j;
char small[] = {'a', 'e', 'o', 't', 'l', '\0'};
char big[] = {'A', 'E', 'O', 'T', 'L', '\0'};
char numbers[] = {'4', '3', '0', '7', '1', '\0'};

for (index = 0; t[index] != '\0'; ++index)
{
for (j = 0; j < 5; j++)
{
if (t[index] == small[j] || t[index] == big[j])
{
t[index] = numbers[j];
}
}
}
return (t);
}
