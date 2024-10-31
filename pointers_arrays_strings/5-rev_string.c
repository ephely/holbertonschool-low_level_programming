#include "main.h"
#include <stdio.h>
/**
* rev_string - reverse a string
* Write a function that reverses a string, in reverse
* @s: char
* Return: idk
*/

void rev_string(char *s)
{
int compte = 0;
int fat;
int igue;
char *dodo;
char lit;

dodo = s;

while (s[compte] != '\0')
{
compte++;
}

for (fat = 1; fat < compte; fat++)
{
dodo++;
}
for (igue = 0; igue < (compte / 2); igue++)
{
lit = s[igue];
s[igue] = *dodo;
*dodo = lit;
dodo--;
}
}
